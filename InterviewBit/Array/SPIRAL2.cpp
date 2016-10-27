vector<vector<int> > Solution::generateMatrix(int A) {

    int dir=0,c=1;
    int i=0,j=0;
   vector<vector<int> >ans;

   ans.resize(A);
    if(A==1)
    {
        ans[0].resize(1);
        ans[0][0]=1;
        return ans;
    }

    for(int k=0;k<A;k++)
    {
        ans[k].resize(A);
        for(int l=0;l<A;l++)
        {
            ans[k][l]=0;
        }
    }

    while(c<=A*A)
    {
          if(i==A-1&&j==0)
        {
            ans[i][j]=c;
            c++;
            i--;
            dir++;
        }
        else if(dir==0)
        {
            ans[i][j]=c;
            c++;
            j++;
        }
        else if(dir==1)
        {
            ans[i][j]=c;
            c++;
            i++;
        }
        else if(dir==2)
        {
            ans[i][j]=c;
            c++;
            j--;
        }
        else if(dir==3)
        {
            ans[i][j]=c;
            c++;
            i--;
        }
         if(j==A)
        {
            j--;
            i++;
            dir++;
            dir%=4;
        }
         if(i==A)
        {
            i--;
            j--;
            dir++;
            dir%=4;
        }

         if(ans[i][j]!=0)
        {
            if(dir==0)
            {
                j--;
                i++;
            }
            if(dir==1)
            {
                i--;
                j--;
            }
            if(dir==2)
            {
                j++;
                i--;
            }
            if(dir==3)
            {
                i++;
                j++;
            }
            dir=(dir+1)%4;

        }
    }
    return ans;

    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
}
