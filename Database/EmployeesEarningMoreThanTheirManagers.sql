/* Write your T-SQL query statement below */

select a.Name as 'Employee'
from Employee a inner join Employee b
on a.ManagerId = b.Id and a.Salary > b.Salary
