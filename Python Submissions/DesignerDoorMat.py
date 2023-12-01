# Enter your code here. Read input from STDIN. Print output to STDOUT
s=input().split()
n=int(s[0])
m=int(s[1])
l=[]
for i in range(1,n,2):
    k='.|.'*i
    print(k.center(m,'-'))
    l.append(k)
l=l[::-1]
print("WELCOME".center(m,'-'))
for i in l:
    print(i.center(m,'-'))
