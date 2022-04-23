//  Given the head of a singly linked list, reverse the list,
// and return the reversed list.

// Approach: 2 Pointers

#include <bits/stdc++.h>
using namespace std;

Node *ReverseList(Node *head)
{

    Node *prev = NULL;
    while (Head != NULL)
    {
        Node *curr = head->next;
        head->next = prev;
        prev = head;
        head = curr;
    }
    return prev;
}