/*
struct RandomListNode {
    int label;
    struct RandomListNode *next, *random;
    RandomListNode(int x) :
            label(x), next(NULL), random(NULL) {
    }
};
*/
class Solution {
public:
    RandomListNode* Clone(RandomListNode* pHead)
    {
        if(!pHead){
            return NULL;
        }
        nodeClone(pHead);
        connectRandom(pHead);
        return reconnect(pHead);
    }
        // copy the node and insert the back of original node
    void nodeClone(RandomListNode* head){
        RandomListNode *pNode = head;
        while(pNode != NULL){
            RandomListNode *pClone = new RandomListNode(pNode -> label);
            pClone -> next = pNode -> next;
            pNode -> next = pClone;
            pNode = pClone -> next;
        }
    }
    // restore the pointer of the new node
    void connectRandom(RandomListNode* head){
        RandomListNode* pNode = head;
        while(pNode != NULL){
            RandomListNode *pClone = pNode -> next;
            if(pNode -> random){
                pClone -> random = pNode -> random -> next;
            }
            pNode = pClone -> next;
        }

    }
    // split the listnode
    RandomListNode* reconnect(RandomListNode *head){
        RandomListNode *pNode = head;
        RandomListNode *result = head -> next;
        while(pNode != NULL){
            RandomListNode *pClone = pNode -> next;
            pNode -> next = pClone -> next;
            pNode = pNode -> next;
            if(pNode != NULL){
                pClone -> next = pNode -> next;
            }
        }
        return result;

    }
};
