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
public:
    ListNode* middleNode(ListNode* head) {
        
        int sz = 0;
        auto h = head;
        while(h!=NULL){
            sz++;
            h=h->next;
        }
        
        int x = sz/2;
        
        while(x){
            x--;
            head=head->next;
        }
        
        return head;
        
    }
};