/**
 basically make a stack and fill it with full values of list . now retrace the stack till half length and add the top element after every element of list . at the end make the last pointers next=NULL
 */
class Solution {
public:
    void reorderList(ListNode* head) {
        if(!head || !head->next || !head->next->next)return ;
        stack<ListNode*> stk;
        int size=0;
        ListNode*temp=head;
        while(temp){
            stk.push(temp);
            temp=temp->next;
            size++;
        }

        temp=head;
        for(int i=0;i<size/2;i++){
            ListNode*ele =stk.top();
            stk.pop();
            ele->next=temp->next;
            temp->next=ele;
            temp=temp->next->next;
        }
        temp->next=NULL;





    }
};