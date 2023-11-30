select max(months*salary),count(employee_id)
from employee
where salary*months = (select max(a.months*a.salary)
                       from employee a);