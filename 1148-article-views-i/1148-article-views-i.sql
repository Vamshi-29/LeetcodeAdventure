# Write your MySQL query statement below

SELECT DISTINCT author.author_id as id
FROM Views author 
JOIN Views viewer 
ON author.author_id = viewer.viewer_id 
ORDER BY author.author_id;
