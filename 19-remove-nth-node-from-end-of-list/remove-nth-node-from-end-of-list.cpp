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
        
        int cnt=0;
        ListNode* first=head;

        while(cnt<n){
            first=first->next;
            cnt++;
        }
        
        if(first==NULL){
            ListNode* temp=head;
            head=head->next;
            delete temp;
            return head;
        }

        ListNode* second =head;
        while(first->next!=NULL){
            first=first->next;
            second=second->next;
        }
        ListNode* toDelete = second->next;
        second->next=toDelete->next;
        delete toDelete;
        return head;
    }
};