

#
# Complete the 'deleteNode' function below.
#
# The function is expected to return an INTEGER_SINGLY_LINKED_LIST.
# The function accepts following parameters:
#  1. INTEGER_SINGLY_LINKED_LIST llist
#  2. INTEGER position
#

#
# For your reference:
#
# SinglyLinkedListNode:
#     int data
#     SinglyLinkedListNode next
#
#

def deleteNode(llist, position):
    
    c = 0
    head = llist
    if c == position:
        return head.next
    while head:
        c += 1
        if c == position:
            head.next = head.next.next
            return llist
        head = head.next
    return llist

