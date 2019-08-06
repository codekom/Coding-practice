/* Write your T-SQL query statement below */
select *
from cinema
where Id%2 <> 0 and
description not like '%boring%'
order by rating desc
