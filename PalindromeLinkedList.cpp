ListNode *reverseList(ListNode *head)
{
    ListNode *prev = NULL;
    ListNode *curr = NULL;
    while (head != NULL)
    {
        curr = head->next;
        head->next = prev;
        prev = head;
        head = curr;
    }
    return prev;
}
bool isPalindrome(ListNode *head)
{
    if (head->next == NULL)
        return true;

    ListNode *fast = head;
    ListNode *slow = head;
    while (fast->next != NULL && fast->next->next != NULL)
    {
        slow = slow->next;
        fast = fast->next->next;
    }
    slow->next = reverseList(slow->next);

    slow = slow->next;
    while (slow != NULL)
    {
        if (head->val != slow->val)
        {
            return false;
        }
        slow = slow->next;
        head = head->next;
    }
    return true;
}