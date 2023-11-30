select cn.continent, floor(avg(c.population))
from city c, country cn
where c.countrycode = cn.code
group by cn.continent
order by ceil(avg(c.population));