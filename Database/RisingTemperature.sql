/* Write your T-SQL query statement below */
select w2.Id
from weather w1 
join weather w2
on DATEDIFF(day,w1.RecordDate,w2.RecordDate) = 1
and w2.temperature > w1.temperature
