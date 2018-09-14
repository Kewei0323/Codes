/*
struct ListNode {
    int val;
    struct ListNode *next;
    ListNode(int x) :
        val(x), next(NULL) {
    }
};
*/

class Solution {
public:
    ListNode* deleteDuplication(ListNode* pHead) {
        if (pHead == NULL || pHead -> next == NULL) { 
            return pHead;
        }
        
        if(pHead->val == pHead->next->val){
            ListNode *pNode = pHead->next;
            while(pNode != NULL && pNode->val == pHead->val){
                pNode = pNode -> next;
            }
            return deleteDuplication(pNode);
        }else{
            pHead -> next = deleteDuplication(pHead -> next);
            return pHead;
        }
    }
};
