int Solution::evalRPN(vector<string> &A) {


    stack<int> s;
    for(int i=0;i<A.size();i++)
    {
       if(A[i]=="+"||A[i]=="*"||A[i]=="-"||A[i]=="/")
       {

           int a=s.top();
            s.pop();
            int b=s.top();
            s.pop();
            //cout<<"a="<<a<<" b="<<b;
            if(A[i][0]=='+')
            {
                s.push(a+b);
                //cout<<" p "<<b<<"+"<<a;
            }
            else if(A[i][0]=='-')
            {
              s.push(b-a);
              // cout<<" p "<<b<<"-"<<a;
            }
            else if(A[i][0]=='*')
            {
              s.push(a*b);
               //cout<<" p "<<b<<"*"<<a;
            }
            else if(A[i][0]=='/')
            {

              s.push(b/a);
               //cout<<" p "<<b<<"/"<<a;
            }
       }
        else
        {
             s.push(atoi(A[i].c_str()));


        }
    }

   return s.top();
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
}
