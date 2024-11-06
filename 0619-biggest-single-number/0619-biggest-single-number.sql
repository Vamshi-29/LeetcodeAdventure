

select max(num) as num 
from (select num from MyNumbers group by num having count(num)=1)
as unique_numbers



-- Why use AS unique_numbers?
-- Naming the Subquery Result:

-- When you use a subquery, it’s treated as a temporary table, and SQL requires this temporary 
-- table to have a name so that you can reference it in the outer query.