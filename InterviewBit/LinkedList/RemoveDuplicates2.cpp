/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
ListNode* Solution::deleteDuplicates(ListNode* A) {

    if (A == NULL) return NULL;
        ListNode* fakeHead = new ListNode(0);
        fakeHead->next = A;
        ListNode* pre = fakeHead;
        ListNode* cur = A;
        while (cur != NULL) {
            while (cur->next != NULL && cur->val == cur->next->val) {
                cur = cur->next;
            }
            if (pre->next == cur) {
                pre = pre->next;
            } else {
                pre->next = cur->next;
            }
            cur = cur->next;
        }
        return fakeHead->next;



    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
}
