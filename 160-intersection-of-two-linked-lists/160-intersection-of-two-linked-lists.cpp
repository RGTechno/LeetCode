/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        
        int sizeA = 0;
        auto h1 = headA;
        while(h1!=NULL){
            h1=h1->next;
            sizeA++;
        }
        
        int sizeB = 0;
        auto h2 = headB;
        while(h2!=NULL){
            h2=h2->next;
            sizeB++;
        }
        
        if(sizeA>sizeB){
            int i=0;
            while(i<(sizeA-sizeB)){
                headA=headA->next;
                i++;
            }
        }
        
        else{
            int i=0;
            while(i<(sizeB-sizeA)){
                headB=headB->next;
                i++;
            }
        }
        
        while(headA!=NULL and headB!=NULL){
            if(headA==headB) return headA;
            headA=headA->next;
            headB=headB->next;
        }
        
        return NULL;
        
    }
};