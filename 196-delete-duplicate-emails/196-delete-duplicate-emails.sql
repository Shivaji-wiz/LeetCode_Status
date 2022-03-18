# Write your MySQL query statement below
DELETE p1 from Person p1
INNER JOIN Person p2
WHERE p2.id < p1.id
AND p1.email = p2.email;