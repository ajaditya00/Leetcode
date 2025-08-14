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
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        if(!headA || !headB) return NULL;
        ListNode*currA=headA;
        ListNode*currB=headB;
        while(currA != currB){
            currA = (currA == NULL) ? headB : currA->next;
            currB = (currB == NULL) ? headA : currB->next;
        }
        return currA;
    }
};