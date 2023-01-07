# Write your MySQL query statement below
SELECT email from Person 
Group By email
HAVING COUNT(email)>1
