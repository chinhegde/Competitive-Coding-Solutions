SELECT name 
from employee
where id in (
    SELECT managerID
    FROM EMPLOYEE
    group by 1
    having count(id) > 4
)