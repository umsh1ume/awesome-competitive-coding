/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
 int getlen(ListNode * A)
 {
     int ans=0;
     ListNode*temp=A;
     while(temp)

     {
         temp=temp->next;
         ans++;
     }
     return ans;
 }
ListNode* Solution::rotateRight(ListNode* A, int B) {

   ListNode* dummy=new ListNode(0);
    dummy->next=A;
   ListNode *end=dummy,*temp=dummy;

   int l=getlen(A);
   while(end->next!=NULL)
   {
       end=end->next;
   }
   int st=l-(B%l);
   for(int i=0;i<st;i++)
   {
       temp=temp->next;
   }
   end->next=dummy->next;
   A=temp->next;
   temp->next=NULL;
   return A;





    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
}
