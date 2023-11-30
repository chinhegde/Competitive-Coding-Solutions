

def getNode(llist, positionFromTail):
    l = list()
    
    while llist:
        l.append(llist.data)
        llist = llist.next
    
    return l[-positionFromTail-1]

