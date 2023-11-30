select ceiling(avg(salary)-avg(convert(int,replace(salary,'0',''))))+1 as diff
from employees;