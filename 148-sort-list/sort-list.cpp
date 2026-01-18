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
    ListNode* findMidPoint(ListNode* head){
        ListNode* slow=head;
        ListNode* fast=head;

        while(slow && fast && fast->next && fast->next->next ){
            slow=slow->next;
            fast=fast->next->next;
        }
        return slow;
    }

    ListNode* mergeList(ListNode* list1, ListNode* list2){
        if(list1==NULL) return list2;
        if(list2==NULL) return list1;
        ListNode* finalhead;
    
        if(list1->val<list2->val){
            finalhead=list1;
            finalhead->next= mergeList(list1->next,list2);
        }
        else{
            finalhead=list2;
            finalhead->next= mergeList(list1,list2->next);
        }
         
         return finalhead;
    }

    ListNode* sortList(ListNode* head) {
        if(head==NULL || head->next==NULL) return head;
        
        ListNode* midpoint=findMidPoint(head);
        ListNode* list1=head;
        ListNode* list2= midpoint->next;
        midpoint->next=NULL;
        list1 = sortList(list1);
        list2= sortList(list2);
        return mergeList(list1,list2);

    }
};