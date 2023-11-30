declare @x int
select @x = 1
while @x <21
begin 
print replicate('* ',@x)
set @x = @x + 1
end
