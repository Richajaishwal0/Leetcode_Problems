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
        ListNode* newnode= new ListNode (0,head);
        ListNode* left=newnode;
        ListNode * right=head;

        for (int i=0;i<n;i++)
        {   if (right!=nullptr)
        {
            right=right->next;
        }  
        }
        while (right!=nullptr)
        {
        left=left->next;
        right=right->next;
        }

        left->next=left->next->next;
        return newnode->next;
        }
       
   
};