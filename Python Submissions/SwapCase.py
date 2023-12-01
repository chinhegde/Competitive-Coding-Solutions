def swap_case(s):
    ns=[]
    for i in s:
        if i.islower():
            ns.append(i.upper())
        elif i.isupper():
            ns.append(i.lower())
        else:
            ns.append(i)
    return ("".join(ns))

