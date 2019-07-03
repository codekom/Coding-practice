/* Write your T-SQL query statement below */

select Email
from (select Email,count(Email) as 'Count'
from Person
group by Email) as res
where res.Count > 1
