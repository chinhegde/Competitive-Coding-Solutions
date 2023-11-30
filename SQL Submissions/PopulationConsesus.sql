select sum(c.population) 
from CITY as c, COUNTRY as cn
where c.CountryCode = cn.Code
and cn.Continent = "Asia";