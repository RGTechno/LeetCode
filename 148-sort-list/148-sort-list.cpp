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
    ListNode* sortList(ListNode* head) {
        
        vector<int> v;
        
        while(head!=NULL){
            v.push_back(head->val);
            
            head=head->next;
        }
        
        sort(v.begin(),v.end());
        
        auto h = new ListNode();
        h = NULL;
        auto temp = h;
        
        for(auto &i:v){
            if(h==NULL){
                auto new_node = new ListNode(i);
                h = new_node;
                temp = h;
            }
            
            else{
                auto new_node = new ListNode(i);
                temp->next = new_node;
                temp = new_node;
            }
        }
        
        return h;
        
    }
};