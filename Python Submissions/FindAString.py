def count_substring(string, sub_string):
    k=0
    cnt=0
    for i in range(len(string)-len(sub_string)+1):
        k=string.find(sub_string,k)+1
        if k==0:
            break
        else:
            cnt+=1    
    return cnt

