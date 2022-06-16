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
    void deleteNode(ListNode* node) {
        
        auto n = node->next;
        while(n->next!=NULL){
            swap(node->val,n->val);
            node=n;
            n=n->next;
        }
        
        swap(node->val,n->val);        
        node->next=NULL;
        
    }
};