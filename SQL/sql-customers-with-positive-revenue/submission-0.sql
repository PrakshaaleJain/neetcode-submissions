-- Write your query below
SELECT customers.customer_id
FROM customers
WHERE customers.year = 2020 AND customers.revenue > 0;