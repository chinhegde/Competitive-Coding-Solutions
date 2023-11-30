

def compare_lists(llist1, llist2):
    while llist1 or llist2:
        try:
            if llist2.data != llist1.data:
                return 0
        except AttributeError:
            return 0
        llist1 = llist1.next
        llist2 = llist2.next
    
    return 1    

