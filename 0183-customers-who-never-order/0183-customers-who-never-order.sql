# Write your MySQL query statement below

SELECT A.Name as Customers from Customers A
WHERE NOT EXISTS (SELECT 1 FROM Orders B WHERE A.Id = B.CustomerId limit 1)