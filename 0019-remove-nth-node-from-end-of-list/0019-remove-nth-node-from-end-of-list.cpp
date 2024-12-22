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
        ListNode* dummy = new ListNode(0, head); // Dummy node before the head
        ListNode* left = dummy;
        ListNode * right=head;
        int index=0;
        while (index<n)
        {
            right=right->next;
            index++;
        }
        while (right)
        {
            left=left->next;
            right=right->next;
        }
        ListNode * temp=left->next;
        left->next=left->next->next;
        delete temp;
         
        ListNode* newHead = dummy->next;
        delete dummy; // Clean up the dummy node
        return newHead;
        // return head;

    }
};