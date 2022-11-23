# Write your MySQL query statement below
SELECT employee_id
FROM Employees as E
WHERE employee_id NOT IN (SELECT employee_id FROM Salaries)

UNION

SELECT employee_id
FROM Salaries as S
WHERE  employee_id NOT IN  (SELECT employee_id FROM Employees)

ORDER BY employee_id

