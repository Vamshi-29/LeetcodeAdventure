
SELECT customer_id, COUNT(Visits.visit_id) AS count_no_trans
from 
Visits left join Transactions 
on 
Visits.visit_id = Transactions.visit_id
where Transactions.transaction_id is null
GROUP BY customer_id