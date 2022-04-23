// Given the head of a linked list, remove the nth node from the end of the list
//  and return its head.

#include <bits/stdc++.h>
using namespace std;

// Approach: Two pointers
Node *removeNthFromEnd(Node *head, int n)
{
    Node *dummy = new ListNode;
    dummy->next = head;

    Node *fast = dummy;
    Node *slow = dummy;

    for (int i = 1; i <= n; i++)
    {
        fast = fast->next;
    }
    while (fast->next != NULL)
    {
        fast = fast->next;
        slow = slow->next;
    }
    slow->next = slow->next->next;
    return dummy->next;
}