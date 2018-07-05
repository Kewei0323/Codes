/*
struct ListNode {
	int val;
	struct ListNode *next;
	ListNode(int x) :
			val(x), next(NULL) {
	}
};*/
class Solution {
public:
    ListNode* ReverseList(ListNode* pHead) {
        if(pHead == NULL || pHead -> next == NULL){
            return pHead;
        }
        ListNode *pTail = NULL;
        ListNode *pNode = pHead;
        ListNode *pPre = NULL;
        
        while(pNode != NULL){
            ListNode *pNext = pNode -> next;
            if(pNext == NULL){
                pTail = pNode;
            }
            pNode -> next = pPre;
            
            pPre = pNode;
            pNode = pNext;
        }
        return pTail;
    }
};
