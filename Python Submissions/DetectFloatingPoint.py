def detect(s):
    try:
        if float(s):
            print("True")
        elif float(s)==0:
            print("False")
    except ValueError as error:
        print("False")

if __name__=="__main__":
    n=int(input())
    s=[]
    for i in range(n):
        s.append(input())
    for i in range(n):
        detect(s[i])
