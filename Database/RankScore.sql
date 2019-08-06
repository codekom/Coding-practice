/* Write your T-SQL query statement below */
select Score,dense_rank() over (order by Score desc)
from Scores
order by Score desc
