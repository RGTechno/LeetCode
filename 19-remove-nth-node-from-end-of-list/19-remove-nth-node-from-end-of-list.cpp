/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
    
    bool good(ListNode *current,int n){
        
        while(n--){
            current = current->next;
        }
        
        return current==NULL;        
    }
    
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        
        ListNode *prev;
        auto current = head;
        
        while(current!=NULL){
            if(good(current,n)){
                if(prev==NULL and current->next==NULL) return NULL;
                else if(prev==NULL and current->next!=NULL){
                    return head->next; 
                }
                prev->next = current->next;
                return head;
            }
            
            prev = current;
            current = current->next;
        }
        return 0;
    }
};