/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
void Print(ListNode* a)
{
    ListNode* temp=a;
    while(temp!=NULL)
    {
        cout<<temp->val<<" ";
        temp=temp->next;
    }
    return;

}
int Solution::lPalin(ListNode* A) {
    ListNode * temp=A,*prev=NULL,*next,*head1,*head2;
    int len=0,flag=1;
    while(temp!=NULL)
    {
        temp=temp->next;
        len++;

    }
   // return len;
    if(len==1)
    return 1;

    int mid=len/2,i=0;
    temp=A;
    while(i<mid)
    {
       next=temp->next;
       temp->next=prev;
       prev=temp;
       temp=next;
       i++;

    }
    if(len%2==0)
    {
        head1=prev;
        head2=temp;
    }
    else
    {
        head1=prev;
        head2=temp->next;
    }
    //Print(head1);
    //cout<<endl;
   // Print(head2);
    //cout<<endl;
    while(head1!=NULL)
    {
        if(head1->val==head2->val)
        {
            head1=head1->next;
            head2=head2->next;
        }
        else
        {
            return 0;
        }
    }
    return flag;




}
