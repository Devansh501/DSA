-- Write your PostgreSQL query statement below
SELECT c.customer_id
FROM Customer as c
Group by customer_id
HAVING COUNT(DISTINCT(product_key)) = (SELECT COUNT(*) FROM Product);