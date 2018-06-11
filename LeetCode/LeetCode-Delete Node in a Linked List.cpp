/*
 [LeetCode] Delete Node in a Linked List 删除链表的节点

 

Write a function to delete a node (except the tail) in a singly linked list, given only access to that node.

Supposed the linked list is 1 -> 2 -> 3 -> 4 and you are given the third node with value 3, 
the linked list should become 1 -> 2 -> 4 after calling your function.
*/

class Solution{
public:
	void deleteNode(ListNode* node){
		node->val = node->next->val;
		ListNode *tmp = node->next;
		node->next = tmp->next;
		delete tmp;
	}
}
