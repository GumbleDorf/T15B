/*
Complexity of 


splitList(L):
    input: non-empty linked list L
    output: L split into two halves

    slow = head(L)
    fast = head(L).next

    while fast != NULL and fast.next != NULL do
        slow = slow.next
        fast = fast.next.next
    end while

    cut L between slow and slow.next


*/

/*

    while not at end of list1:
        while not at end of list2:
            code


*/