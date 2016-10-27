ListNode* Solution::detectCycle(ListNode* A) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
    if(A==NULL||A->next==NULL)
    return NULL;
  ListNode* slow=A, *fast=A;
  int flag=0;
  while(slow!=NULL&&fast!=NULL&&fast->next!=NULL&&fast->next->next!=NULL)
  {
      slow=slow->next;
      fast=fast->next->next;
      if(slow==fast)
      {
          flag=1;
          break;
      }
  }
  if(!flag)
  return NULL;

  slow=A;
  while(slow!=fast)
  {
      slow=slow->next;
      fast=fast->next;
  }
  return slow;
}
