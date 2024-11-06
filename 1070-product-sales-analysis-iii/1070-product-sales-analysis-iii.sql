# Write your MySQL query statement below

select product_id,year as first_year, quantity,price
from Sales 
where (year) In (
    select MIN(year) as first_year
    from sales 
    group by product_id
)