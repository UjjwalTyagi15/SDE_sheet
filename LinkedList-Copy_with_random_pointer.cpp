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
        Node *temp=head;
        Node *head1=new Node(0);
        Node *t=head1;
        unordered_map<Node*,Node*> mpp;
        while(temp){
            t->next=new Node(temp->val);
            t=t->next;
            mpp[temp]=t;
            temp=temp->next;
        }

        temp=head;
        t=head1->next;
               
        while(temp){
            if(temp->random){
                t->random=mpp[temp->random];
            }
            t=t->next;
            temp=temp->next;
        }

        return head1->next;;
        
    }
};