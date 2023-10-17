# Write your MySQL query statement below
select users.name as name, sum(transactions.amount) as balance
from users
join transactions on users.account = transactions.account
group by users.account
having balance > 10000 