# Write your MySQL query statement below


select project_id,avg(e.experience_years) as average_years
from Project p 
left join Employee e
on p.employee_id=e.employee_id
group by project_id