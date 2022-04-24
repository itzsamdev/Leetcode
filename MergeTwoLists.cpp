// You are given the heads of two sorted linked lists list1 and list2.

// Merge the two lists in a one sorted list. The list should be made by splicing
// together the nodes of the first two lists.

// Return the head of the merged linked list.

// Approach: Two Pointer, Time: O(n+m) Space O(1)
Node *MergeTwoLists(Node *list1, Node *list2)
{
    if (list1 == NULL)
        return list2;
    if (list2 == NULL)
        return list1;
    if (list1->val > list2->val)
        swap(list1, list2);

    Node *res = list1;
    while (list1 != NULL && list2 != NULL)
    {
        Node *temp = NULL;
        while (list1->val <= list2->val)
        {
            temp = list1;
            list1 = list->next;
        }
        temp->next = list2;
        swap(list1, list2);
    }
    return res;
}