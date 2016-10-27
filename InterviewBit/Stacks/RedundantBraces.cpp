int Solution::braces(string A) {

    stack<char> s;
    int i=0,cunt=0;
    int redundant=0;
    while(i<A.length())
    {
        if(A[i]!=')' )
       {
           s.push(A[i]);

       }
       else
       {
           cunt=0;
           while(s.empty()==false&&s.top()!='(')
           {
               s.pop();
               cunt++;
           }
           s.pop();
           if(cunt==0||cunt==1)
           {
               redundant=1;
           }
       }
       i++;
    }
    return redundant;

    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
}
