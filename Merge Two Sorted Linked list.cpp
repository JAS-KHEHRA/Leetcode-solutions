class Solution {
public:
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) 
    {
        ListNode temp(INT_MIN);
        ListNode *newlist=&temp;
        while(l1 && l2)
        {
            if(l1->val < l2->val)
            {
                newlist->next=l1;
                l1=l1->next;
            }
           else
            {
                newlist->next=l2;
                l2=l2->next;
            }
            newlist=newlist->next;
        }
        newlist->next= l1 ? l1:l2;
        return temp.next;
                 
       
        
        
    }
};
