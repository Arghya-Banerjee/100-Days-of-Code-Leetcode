class Solution {
public:
    ListNode* reverseList(ListNode* head) 
    {
       ListNode* temp=NULL;
        ListNode* temp2=NULL;
        while(head!=NULL){
            temp2=head->next;
            head->next=temp;
            temp=head;
            head=temp2;


        }
       head=temp; 
       return head;
    }
};