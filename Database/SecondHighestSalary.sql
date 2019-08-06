/* Write your T-SQL query statement below */
select isnull((select top 1 salary
from Employee
where salary < (select max(salary) from Employee)
order by salary desc),NULL)  as 'SecondHighestSalary'
