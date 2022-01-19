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
    ListNode *detectCycle(ListNode *head) {
        set<ListNode *> st;
        
        while(head!=NULL){
            if(st.count(head)==1) return head;
            st.insert(head);
            head=head->next;
        }
        
        return NULL;
    }
};