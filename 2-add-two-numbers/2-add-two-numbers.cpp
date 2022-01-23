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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        
        ListNode *head = NULL;
        ListNode *temp = NULL;
        
        int carry = 0;
        
        int value;
        
        while(l1!=NULL and l2!=NULL){
            int sum = (l1->val+l2->val)+carry;
            if(sum>=10){
                value = sum%10;
                carry = sum/10;
                ListNode *new_node = new ListNode(value);
                if(temp==NULL){
                    head=new_node;
                    temp=new_node;
                }
                else{
                    temp->next = new_node;
                    temp=new_node;
                }
                
            }
            else{
                value = sum%10;
                carry=0;
                ListNode *new_node = new ListNode(value);
                if(temp==NULL){
                    head=new_node;
                    temp=new_node;
                }
                else{
                    temp->next = new_node;
                    temp=new_node;
                }                
            }
            
            l1=l1->next;
            l2=l2->next;
        }
        
        while(l1!=NULL){
            int sum = l1->val+carry;
            if(sum>=10){
                value = sum%10;
                carry = sum/10;
                
                ListNode * new_node = new ListNode(value);
                if(temp==NULL){
                    head=new_node;
                    temp=new_node;
                }
                else{
                    temp->next = new_node;
                    temp = new_node;
                }
            }
            else{
                value = sum%10;
                carry = 0;
                
                ListNode * new_node = new ListNode(value);
                if(temp==NULL){
                    head=new_node;
                    temp=new_node;
                }
                else{
                    temp->next = new_node;
                    temp = new_node;
                }
            }
            l1=l1->next;
        }
        
        while(l2!=NULL){
            int sum = l2->val+carry;
            if(sum>=10){
                value = sum%10;
                carry = sum/10;
                
                ListNode * new_node = new ListNode(value);
                if(temp==NULL){
                    head=new_node;
                    temp=new_node;
                }
                else{
                    temp->next = new_node;
                    temp = new_node;
                }
            }
            else{
                value = sum%10;
                carry = 0;
                
                ListNode * new_node = new ListNode(value);
                if(temp==NULL){
                    head=new_node;
                    temp=new_node;
                }
                else{
                    temp->next = new_node;
                    temp = new_node;
                }
            }
            l2=l2->next;
        }
        
        if(carry==1){
            ListNode * new_node = new ListNode(1);
            temp->next = new_node;
            temp=new_node;
        }
        
        return head;
        
    }
};