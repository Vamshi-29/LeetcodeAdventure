# Write your MySQL query statement below

Select W1.id From Weather W1
Join Weather W2 On W1.recordDate=Date_Add(W2.recordDate, Interval 1 Day)
Where W1.temperature>W2.temperature