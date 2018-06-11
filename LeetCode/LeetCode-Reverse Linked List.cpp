/*
[LeetCode] Reverse Linked List 

Reverse a singly linked list.
click to show more hints.
Hint:

A linked list can be reversed either iteratively or recursively. Could you implement both?
*/

// Iterative
class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        if (!head) return head;
        ListNode *dummy = new ListNode(-1);
        dummy->next = head;
        ListNode *cur = head;
        while (cur->next) {
            ListNode *tmp = cur->next;
            cur->next = tmp->next;
            tmp->next = dummy->next;
            dummy->next = tmp;
        }
        return dummy->next;
    }
};

// Recursive
class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        if (!head || !head->next) return head;
        ListNode *p = head;
        head = reverseList(p->next);
        p->next->next = p;
        p->next = NULL;
        return head;
    }
};