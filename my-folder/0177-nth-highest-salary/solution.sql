CREATE FUNCTION getNthHighestSalary(N INT) RETURNS INT
BEGIN
DECLARE A INT;
SET A=N-1;
  RETURN (
      # Write your MySQL query statement below.
      SELECT DISTINCT salary
      FROM Employee
      ORDER BY salary DESC
      LIMIT A,1
  );
END
