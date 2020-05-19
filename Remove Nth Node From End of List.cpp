class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* fast=head;
        ListNode* slow=head;
        while(n--)
        {
         fast=fast->next;
        }
        if(fast==NULL)
        {
            head=head->next;
        } 
        else{
            while(fast->next!=NULL)
        {
            fast=fast->next;
            slow=slow->next;
        }
        slow->next=slow->next->next;
        }
        return head;
    }
};
