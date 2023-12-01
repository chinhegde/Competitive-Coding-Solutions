def merge_the_tools(string, k):
    t=[]
    i=0
    while i in range(len(string)):
        if i+k>=len(string):
            t.append(string[i:])
        else:
            t.append(string[i:i+k])
        i+=k
    for i in range(len(t)):
        u=[]
        for j in range(len(t[i])):
            if t[i][j] not in u:
                u.append(t[i][j])
        print(''.join(u))

