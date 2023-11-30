

#
# Complete the 'reverse' function below.
#
# The function is expected to return an INTEGER_SINGLY_LINKED_LIST.
# The function accepts INTEGER_SINGLY_LINKED_LIST llist as parameter.
#

#
# For your reference:
#
# SinglyLinkedListNode:
#     int data
#     SinglyLinkedListNode next
#
#

def reverse(head):
    nxt = None
    while head:
        tmp = head.next
        head.next = nxt
        nxt = head
        head = tmp
        # print(nxt.data,head.data,head.next.data)
    return nxt
