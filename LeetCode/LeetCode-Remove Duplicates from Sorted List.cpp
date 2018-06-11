/*
[LeetCode] Remove Duplicates from Sorted List 

Given a sorted linked list, delete all duplicates such that each element appear only once.

For example,
Given 1->1->2, return 1->2.
Given 1->1->2->3->3, return 1->2->3.
*/

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */

class Solution{
public:
	ListNode *deleteDuplicates(ListNode *head){
		if (!head || !head->next) return head;

		ListNode *start = head;
		while(start && start->next){
			if (start->val == start->next->val){
				LiseNode *tmp = start->next;
				start->next = start->next->next;
				delete tmp
			else start = start->next;
			}
		}
		return head;
	}
}
