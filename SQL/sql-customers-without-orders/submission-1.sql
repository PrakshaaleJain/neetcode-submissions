-- # Write your MySQL query statement below
SELECT customers.name as name
FROM customers
WHERE customers.id NOT IN (
    SELECT customer_Id
    FROM orders
);