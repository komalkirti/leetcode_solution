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
    ListNode* getNode(ListNode* head){
        ListNode* slow=head;
        ListNode* fast = head;

        while(fast && fast->next && fast->next->next){
            slow=slow->next;
            fast=fast->next->next;
            if(slow==fast) return slow;
        }
        return NULL;
    }

    ListNode *detectCycle(ListNode *head) {
        
       ListNode* slow=getNode(head);
       if(slow==NULL) return NULL;

        ListNode* temp=head;
        while(temp!=slow){
            temp=temp->next;
            slow=slow->next;
        }
        return temp;

    }
};