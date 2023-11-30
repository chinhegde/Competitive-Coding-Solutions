

# Complete the insertNodeAtHead function below.

#
# For your reference:
#
# SinglyLinkedListNode:
#     int data
#     SinglyLinkedListNode next
#
#
def insertNodeAtHead(llist, data):
    if llist == None:
        llist = SinglyLinkedListNode(data)
        return llist
    else:
        newn = SinglyLinkedListNode(data)
        newn.next = llist
        
        return newn
    
    

