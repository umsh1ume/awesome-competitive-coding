/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
ListNode* Solution::mergeTwoLists(ListNode* A, ListNode* B) {
    ListNode * result;
    if(A==NULL)
    return B;
    else if(B==NULL)
    return A;
    if(A->val<B->val)
    {
        result=A;
        result->next=mergeTwoLists(A->next,B);
    }
    else
    {
        result=B;
        result->next=mergeTwoLists(A,B->next);
    }
    return result;



    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
}
