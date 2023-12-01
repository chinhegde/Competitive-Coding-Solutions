# Enter your code here. Read input from STDIN. Print output to STDOUT
n=int(input())
col_name=input()
col=[]
for i in range(n):
    col.append(input().split())
index=0
for i in range(len(col_name.split())):
    if col_name.split()[i]=='MARKS':
        index=i
marks=[]
for i in col:
    marks.append(int(i[index]))
print('{0:.2f}'.format(sum(marks)/len(marks)))
