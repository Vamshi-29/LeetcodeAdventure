SELECT 
    r.contest_id,
    Round(COUNT(DISTINCT r.user_id) / (SELECT COUNT(DISTINCT user_id) FROM Users) * 100 , 2) AS percentage
FROM 
    Register r
GROUP BY 
    r.contest_id
ORDER BY percentage desc, contest_id
