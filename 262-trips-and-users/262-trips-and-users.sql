# Write your MySQL query statement below

SELECT T.request_at Day, 
    ROUND(SUM(IF(T.status != 'completed',1,0))/COUNT(T.id),2) AS 'Cancellation Rate' 
    FROM  Trips T JOIN Users U1
    ON(T.client_id = U1.users_id AND U1.banned = 'No')
    JOIN Users U2 
    ON(T.driver_id = U2.users_id AND U2.banned = 'No')
    WHERE T.request_at BETWEEN "2013-10-01" AND "2013-10-03"
    # WHERE T.request_At >= "2013-10-01" AND T.request_At <= "2013-10-03"
    GROUP BY T.request_at;