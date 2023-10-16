# Write your MySQL query statement below
SELECT NAME AS Employee
FROM Employee as e1
WHERE SALARY > (SELECT SALARY FROM Employee WHERE ID = e1.managerID)
