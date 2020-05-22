class Solution {
public:
    bool isPalindrome(ListNode* head) 
    {
        stack<int> s;
        ListNode* a=head;
        while(a!=NULL)
        {
            s.push(a->val);
            a=a->next;
        }
        while(head!=NULL)
        {
            int p=s.top();
            s.pop();
            if(p!=head->val)
            {
                return false;
            }
            else head=head->next;
        }
        return true;
        
    }
};
