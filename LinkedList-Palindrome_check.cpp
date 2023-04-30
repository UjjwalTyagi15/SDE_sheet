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
    bool isPalindrome(ListNode* head) {
        ListNode* fast=head;
        ListNode* slow=head;


        // while(fast&& fast->next){
        //     fast=fast->next->next;
        //     slow=slow->next;
        // }
        while(fast!=NULL && fast->next!=NULL){
            fast=fast->next->next;
            slow=slow->next;
        }

        ListNode* nex=slow;
        ListNode* curr=slow;
        ListNode* prev=NULL;

        while(curr!=NULL){
            nex=nex->next;
            curr->next=prev;
            prev=curr;
            curr=nex;
        }
        curr=head;
        while(prev){
            if(curr->val!=prev->val)return false;
            curr=curr->next;
            prev=prev->next;
        }
        return true;



    }
};