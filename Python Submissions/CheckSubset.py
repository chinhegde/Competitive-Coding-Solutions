# Enter your code here. Read input from STDIN. Print output to STDOUT
x = int(input())

for k in range(x):
    na = int(input())
    a = set(input().split())
    nb = int(input())
    b = set(input().split())

    if a == b.intersection(a):
        print("True")
    else:
        print("False")
