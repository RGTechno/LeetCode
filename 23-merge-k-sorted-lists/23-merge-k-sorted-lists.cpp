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
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        int n = lists.size();
        
        priority_queue<int> pq;
        
        for(int i=0;i<n;i++){
            while(lists[i]!=NULL){
                pq.push(lists[i]->val);
                lists[i]=lists[i]->next;
            }
        }
        
        ListNode * head = NULL;
        
        while(!pq.empty()){
            ListNode * new_node = new ListNode(pq.top());
            if(head==NULL){
                head = new_node;
            }
            else{
                new_node->next = head;
                head = new_node;
            }
            // cout<<pq.top()<<" ";
            pq.pop();
        }
        
        return head;
    }
};