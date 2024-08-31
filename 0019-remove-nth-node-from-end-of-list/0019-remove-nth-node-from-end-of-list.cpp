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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* start = new ListNode();  // Create a new dummy node
        start->next = head;  // Set dummy node's next to head
        ListNode* fast = start;
        ListNode* slow = start;

        // Move fast pointer n steps ahead
        for(int i = 1; i <= n; ++i) {
            fast = fast->next;
        }

        // Move fast to the end, maintaining the gap
        while(fast->next != nullptr) {
            fast = fast->next;
            slow = slow->next;
        }

        // Skip the desired node
        slow->next = slow->next->next;

        return start->next;  // Return the new head node
    }
};