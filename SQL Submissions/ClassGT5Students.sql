SELECT class
FROM COURSES
GROUP BY CLASS
HAVING COUNT(STUDENT) > 4