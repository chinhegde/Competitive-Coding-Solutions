

# Complete the solve function below.
def solve(s):
    if s.isalpha() or ' ' in s:
        flag=1
        for i in range(len(s)):
            if s[i].isdigit():
                flag=0
            if flag==1:
                return s.title()
    i=1
    res=s[0].capitalize()
    while i in range(len(s)):
        if s[i-1]==' ':
            res+=s[i].capitalize()
        else:
            res+=s[i]
        i+=1
    return res

