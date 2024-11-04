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
    ListNode* partition(ListNode* head, int x) {
        if(head==NULL || head->next==NULL)return head;
        ListNode*temp=head;
        ListNode*Low=new ListNode(-1);
        ListNode*High=new ListNode(-1);
        ListNode*low=Low;
        ListNode*high=High;
        while(temp!=NULL){
            if(temp->val<x){
                low->next=temp;
                low=low->next;
            }else{
                high->next=temp;
                high=high->next;
            }temp=temp->next;
        }
        high->next=NULL;
        low->next=High->next;
        return Low->next;
    }
};