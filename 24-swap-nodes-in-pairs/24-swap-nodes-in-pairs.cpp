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
    void solve(ListNode *head){
        if(head!=NULL and head->next!=NULL){
            swap(head->val,head->next->val);
            
            solve(head->next->next);
        }
    }
public:
    ListNode* swapPairs(ListNode* head) {
        
        ListNode *temp = head;
        
        solve(head);
        
        return head;
    }
};