# Enter your code here. Read input from STDIN. Print output to STDOUT
a = int(input())
s = set(map(int,input().split()))
n = int(input())

for i in range(n):
    func, num = input().split()
    s2 = set(map(int,input().split()))
    if "intersection" in func:
        s.intersection_update(s2)
    elif "symm" in func:
        s.symmetric_difference_update(s2)
    elif "diff" in func:
        s.difference_update(s2)
    elif "update" in func:
        s.update(s2)  
print(sum(s))
