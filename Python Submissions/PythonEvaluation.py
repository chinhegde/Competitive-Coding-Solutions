# Enter your code here. Read input from STDIN. Print output to STDOUT

s=input()
try:
    eval(s)
except TypeError as e:
    pass
