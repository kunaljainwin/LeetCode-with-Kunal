# Write your MySQL query statement below
SELECT customer_number
FROM Orders
GROUP BY customer_number
ORDER BY COUNT(order_number) desc limit 1
# WHERE COUNT(customer_number) =MAX(COUNT(customer_number))
