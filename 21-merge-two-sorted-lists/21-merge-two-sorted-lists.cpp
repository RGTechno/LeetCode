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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        
        auto head = new ListNode();
        head = NULL;
        auto temp = head;
        
        while(list1!=NULL and list2!=NULL){
            if(head==NULL){
                if(list1->val<list2->val){
                    auto new_node = new ListNode(list1->val);
                    head = new_node;
                    temp = head;
                    list1 = list1->next;
                }
                else{
                    auto new_node = new ListNode(list2->val);
                    head = new_node;
                    temp = head;
                    list2 = list2->next;
                }
            }
            else{
                if(list1->val<list2->val){
                    auto new_node = new ListNode(list1->val);
                    temp->next = new_node;
                    temp = new_node;
                    list1 = list1->next;
                }
                else{
                    auto new_node = new ListNode(list2->val);
                    temp->next = new_node;
                    temp = new_node;
                    list2 = list2->next;
                }
            }
        }
        
        while(list1!=NULL){
            if(head==NULL){
                auto new_node = new ListNode(list1->val);
                head = new_node;
                temp = head;
                list1 = list1->next;
                continue;
            }
            auto new_node = new ListNode(list1->val);
            temp->next = new_node;
            temp = new_node;
            list1 = list1->next;
        }
        while(list2!=NULL){
            if(head==NULL){
                auto new_node = new ListNode(list2->val);
                head = new_node;
                temp = head;
                list2 = list2->next;
                continue;
            }
            auto new_node = new ListNode(list2->val);
            temp->next = new_node;
            temp = new_node;
            list2 = list2->next;
        }
        return head;
    }
};