/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* next;
    Node* random;
    
    Node(int _val) {
        val = _val;
        next = NULL;
        random = NULL;
    }
};
*/

class Solution {
public:
    Node* copyRandomList(Node* head) {
        
        Node* temp=head;
        map<int,int>mp;
        map<Node*,Node*>m;

        Node* head2=NULL;
        Node* prev=NULL;
        while(temp!=NULL){
            
            Node* cur = new Node(temp->val);
            if(head2==NULL){
                head2=cur;
            }
            if(prev!=NULL){
                prev->next=cur;
            }
           m[temp]=cur;
            prev=cur;   
            temp=temp->next;         

        }

        temp=head;
        Node* newTemp=head2;
        while(temp){
            if(temp->random!=NULL){
                Node* random_original = temp->random;
                Node* new_random = m[random_original];
                newTemp->random=new_random;
            }
            else newTemp->random=NULL;
            temp=temp->next;
            newTemp=newTemp->next;
        }
        return head2;
    }
};