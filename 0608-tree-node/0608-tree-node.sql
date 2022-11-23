# Write your MySQL query statement below
SELECT id,(CASE
    WHEN p_id IS NULL  THEN 'Root'
    WHEN p_id IS NOT NULL AND id IN (SELECT p_id FROM Tree) THEN 'Inner'
    WHEN p_id IS NOT NULL THEN 'Leaf'
    END ) as type
FROM Tree

