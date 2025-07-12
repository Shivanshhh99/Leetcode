class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) 
    {

        //If the LL is empty means head==0
        if(head==0)
        {
            return nullptr;
        }
        
        if(n==0)
        {
            ListNode* h= head;
            head=head->next;
            delete h;
            return head;
        }
        
        ListNode* temp=head;
        int count=0;
        
        // We will be traversing till the node n-1
        
        while(temp!=nullptr && count<=n-1)
        {
            temp=temp->next;
            count++;
        }
        
//If k is out of bound then we will check for is temp is null or next of the temp is null 
        
        if(temp==nullptr ||temp->next==nullptr)
        {
            return head;
        }
        
        ListNode* p= temp->next;
        temp->next= temp->next->next;
        delete p;
        return head;
}
};