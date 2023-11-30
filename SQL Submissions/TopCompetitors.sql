select h.hacker_id, h.name 
from hackers h, difficulty d, challenges c, submissions s
where s.challenge_id = c.challenge_id
and c.difficulty_level = d.difficulty_level
and s.score = d.score
and s.hacker_id = h.hacker_id
group by h.hacker_id,h.name having count(*)>1
order by count(*) desc, h.hacker_id;