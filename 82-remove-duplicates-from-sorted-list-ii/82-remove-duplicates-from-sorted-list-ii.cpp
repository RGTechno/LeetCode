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
    ListNode* deleteDuplicates(ListNode* head) {
        map<int,int> mp;
        
        while(head!=NULL){
            mp[head->val]++;
            head=head->next;
        }
        
        auto h = new ListNode();
        auto t = new ListNode();
        h=NULL;
        t=h;
        
        for(auto &i:mp){
            if(i.second==1){
                if(h==NULL){
                    auto new_node = new ListNode(i.first);
                    h=new_node;
                    t=h;
                }
                else{
                    auto new_node = new ListNode(i.first);
                    t->next = new_node;
                    t=new_node;
                }
            }
        }
        
        return h;
    }
};