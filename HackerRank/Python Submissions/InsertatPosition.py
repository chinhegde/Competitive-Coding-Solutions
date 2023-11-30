

#
# Complete the 'insertNodeAtPosition' function below.
#
# The function is expected to return an INTEGER_SINGLY_LINKED_LIST.
# The function accepts following parameters:
#  1. INTEGER_SINGLY_LINKED_LIST llist
#  2. INTEGER data
#  3. INTEGER position
#

#
# For your reference:
#
# SinglyLinkedListNode:
#     int data
#     SinglyLinkedListNode next
#
#

def insertNodeAtPosition(llist, data, position):
    cur = llist
    c = 0
    
    while cur:
        print(c,cur.data)
        c += 1
        if c == position:
            n = SinglyLinkedListNode(data)
            t = cur.next
            cur.next = n
            n.next = t
            break
        cur = cur.next
    return llist

