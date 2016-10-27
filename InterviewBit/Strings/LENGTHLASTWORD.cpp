int Solution::lengthOfLastWord(const string &A) {
   int l,r=A.size()-1;
   if(A.size()==1&&A[0]!=' ')
   return 1;


    while(A[r]==' '&&r>=0)
       r--;


    l=r;



    while(A[l]!=' '&&l>=0)
    {
        l--;
    }

    return r-l;
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
}
