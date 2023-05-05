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
    ListNode* partition(ListNode* head, int x) {
        if(head==NULL || head->next==NULL)return head;
        ListNode* dummy=new ListNode(0);
        ListNode* prev=dummy;
        prev->next=head;
        ListNode* curr=head;
        while(curr && curr->val<x){
            curr=curr->next;
            prev=prev->next;
        }
        // cout<<curr->val<<endl;
        ListNode* nex=curr;
        while(nex && nex->next){
            if(nex->next->val<x){
                ListNode*temp=nex->next;
                nex->next=temp->next;
                temp->next=prev->next;
                prev->next=temp;
                prev=prev->next;

            }
            else{
                nex=nex->next;
            }
        }
        return dummy->next;



    }
};