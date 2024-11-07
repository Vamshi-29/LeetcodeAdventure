# Write your MySQL query statement below

SELECT 
    s.user_id,
    COUNT(CASE WHEN c.action = 'confirmed' THEN 1 END) * 1.0 / COUNT(*) AS confirmation_rate
FROM 
    Signups s
LEFT JOIN 
    Confirmations c ON s.user_id = c.user_id 
GROUP BY 
    s.user_id;

    

