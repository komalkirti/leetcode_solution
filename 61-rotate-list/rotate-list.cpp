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
    ListNode* rotateRight(ListNode* head, int k) {

        int n=0;
        ListNode* temp=head;
        if(head==NULL ||head->next==NULL ||k==0) return head;

        while(temp!=NULL){
            n++;
            temp=temp->next;
        }
        k=k%n;
        if(k==0) return head;

        temp=head;
        int cnt=0;
        while(cnt<k){
            cnt++;
            temp=temp->next;
        }
        ListNode* newEnd=head;
        while(temp->next!=NULL){
            newEnd=newEnd->next;
            temp=temp->next;
        }

        ListNode* newHead=newEnd->next;
        newEnd->next=NULL;

        temp=newHead;
        while(temp->next!=NULL){
            temp=temp->next;
        }
        temp->next=head;
        return newHead;

        
    }
};