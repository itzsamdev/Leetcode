// Given the heads of two singly linked-lists headA and headB, return the node at
// which the two lists intersect. If the two linked lists
// have no intersection at all, return null.

// Approach: Two Pointer Time O(2m) Space O(1)
Node *IntersectionNode(node *first, Node *second)
{
    if (first == NULL || second == NULL)
        return NULL;
    Node *dummy1 = first;
    Node *dummy2 = second;

    while (dummy1 != dummy2)
    {
        if (dummy1 == NULL)
            dummy1 = second;
        else
            dummy1 = dummy1->next;

        if (dummy2 == NULL)
            dummy2 = first;
        else
            dummy2 = dummy2->next;
    }
    return dummy1;
}