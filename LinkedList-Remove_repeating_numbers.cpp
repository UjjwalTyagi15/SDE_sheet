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
    ListNode* deleteDuplicates(ListNode* head) {
        if(head==NULL || head->next==NULL)return head;

        ListNode* dummy=new ListNode(0);
        ListNode* prev=dummy;
        prev->next=head;
        ListNode* curr=head;
        ListNode* nex=head->next;
        while(nex){
            if(nex->val==curr->val){
                while(nex &&  nex->val==curr->val){nex=nex->next;
               }
                // cout<<prev->val<<" "<<curr->val<<" "<<nex->val<<endl;
                prev->next=nex;
                curr=nex;
                if(nex)nex=nex->next;
            }
            else {curr=curr->next;
            prev=prev->next;
            nex=nex->next;}
        }
        // cout<<prev->next->val;
        return dummy->next;


    }
};