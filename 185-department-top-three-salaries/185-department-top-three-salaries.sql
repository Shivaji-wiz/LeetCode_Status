# Write your MySQL query statement below
SELECT D.name Department, E.name Employee, E.salary Salary 
FROM Employee E JOIN Department D
ON(E.departmentId = D.id)
WHERE E.salary IN (
    SELECT * FROM (
        SELECT DISTINCT salary 
        FROM Employee
        WHERE departmentId = D.id
        ORDER BY salary DESC LIMIT 3
        )AS B
);