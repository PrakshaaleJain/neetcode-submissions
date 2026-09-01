-- Write your query below
-- # Write your MySQL query statement below
SELECT users.name, COALESCE(SUM(Rides.distance), 0) as travelled_distance
FROM users
LEFT JOIN rides
ON users.id = rides.user_id
GROUP BY users.id, users.name
ORDER BY travelled_distance DESC, users.name;
