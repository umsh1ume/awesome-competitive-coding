unsigned int Solution::reverse(unsigned int A) {
       unsigned int count = sizeof(A) * 8 - 1;
    unsigned int reverse_num = A;

    A >>= 1;
    while(A)
    {
       reverse_num <<= 1;
       reverse_num |= A & 1;
       A >>= 1;
       count--;
    }
    reverse_num <<= count;
    return reverse_num;
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
}
