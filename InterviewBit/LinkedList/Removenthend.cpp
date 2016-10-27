/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
 int getlen(ListNode* a)
 {
     int cunt=0;
     while(a!=NULL)
     {

         a=a->next;
         cunt++;

     }
     return cunt;
 }

ListNode* Solution::removeNthFromEnd(ListNode* A, int B) {
   // cout<<getlen(A)<<endl;
   int l=getlen(A);
   int n=l-B+1;
   if(l<=B)
   {
       A=A->next;
       return A;
   }
   ListNode * temp=A;
   for(int i=0;i<n-2;i++)
   {
       temp=temp->next;

   }
   temp->next=temp->next->next;


    return A;
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
}
