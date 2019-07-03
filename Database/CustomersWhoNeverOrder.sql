/* Write your T-SQL query statement below */

select Name as 'Customers'
from Customers c left outer join Orders o
on c.Id = o.CustomerId
where o.CustomerId is null
