# Write your MySQL query statement below
SELECT user_id ,COUNT(DISTINCT(follower_id)) as followers_count
FROM Followers
group BY 1