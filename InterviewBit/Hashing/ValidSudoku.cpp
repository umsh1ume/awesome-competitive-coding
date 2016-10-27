int Solution::isValidSudoku(const vector<string> &A) {


    map<int,int> rowhash[9];
    map<int,int> colhash[9];
    map<int,int> dabbahash[3][3];
    for(int pos=0;pos<81;pos++)
    {
        int row=pos/9;
        int col=pos%9;
        if(A[row][col]!='.')
        {

            int dig=(int)(A[row][col]-'0');
              if(rowhash[row].find(dig)!=rowhash[row].end()||colhash[col].find(dig)!=colhash[col].end()||
              dabbahash[row/3][col/3].find(dig)!=dabbahash[row/3][col/3].end()
              )
              return 0;
            rowhash[row][dig]=1;
            colhash[col][dig]=1;
            dabbahash[row/3][col/3][dig]=1;

        }
    }
    return 1;
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
}
