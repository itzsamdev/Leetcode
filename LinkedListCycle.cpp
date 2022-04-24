//  Given head, the head of a linked list, determine if the linked list has a cycle in it.

// There is a cycle in a linked list if there is some node in the list that can be
//  reached again by continuously following the next pointer. Internally, pos is
//  used to denote the index of the node that tail's next pointer is connected to.
//   Note that pos is not passed as a

bool detectLoop(Node *head)
{
    if (head == NULL || head->next == NULL)
        return false;
    Node *fast = head;
    Node *slow = head;
    while (fast->next != NULL && fast->next->next != NULL)
    {
        fast = fast->next->next;
        slow = slow->next;
        if (slow == fast)
            return true;
    }
    return false;
}