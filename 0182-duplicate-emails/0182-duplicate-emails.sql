# Write your MySQL query statement below
-- SELECT DISTINCT (P1.Email)
-- FROM Person P1
-- INNER JOIN Person P2
-- ON P1.email = P2.email AND P1.id <> P2.id;


SELECT DISTINCT (P1.Email)
FROM Person P1
INNER JOIN Person P2
WHERE P1.email = P2.email AND P1.id <> P2.id;