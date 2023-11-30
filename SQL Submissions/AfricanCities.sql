select c.name
from city c, country cn
where c.countrycode = cn.code
and cn.continent = "Africa";