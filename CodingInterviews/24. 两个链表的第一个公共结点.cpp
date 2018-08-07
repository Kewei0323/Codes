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
    ListNode* FindFirstCommonNode( ListNode* pHead1, ListNode* pHead2) {
        if(pHead1 == NULL || pHead2 == NULL){
            return NULL;
        }
        int length1 = CountLength(pHead1);
        int length2 = CountLength(pHead2);
        int diff = length1 - length2;
        
        ListNode *p1 = pHead1;
        ListNode *p2 = pHead2;
        
        if(length1 > length2){
            for(int i = 0; i < diff; i++){
                p1 = p1 -> next;
            }
        }else{
            for(int i = 0; i < -diff; i++){
                p2 = p2 -> next;
            }
        }
        while(p1 != NULL){
            if(p1 == p2){
                return p1;
            }
            p1 = p1 -> next;
            p2 = p2 -> next;
        }
        return NULL;
    }
    
    int CountLength(ListNode* pHead){
        ListNode *pTmp = pHead;
        int count = 0;
        while(pTmp != NULL){
            pTmp = pTmp -> next;
            count++;
        }
        return count;
    }
};
