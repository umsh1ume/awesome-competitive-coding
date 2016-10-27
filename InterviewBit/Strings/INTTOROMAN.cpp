string Solution::intToRoman(int A) {
    string M[]={"","M","MM","MMM"};
    string C[]={"","C","CC","CCC","CD","D","DC","DCC","DCCC","CM"};
    string X[] = {"", "X", "XX", "XXX", "XL", "L", "LX", "LXX", "LXXX", "XC"};
     string I[] = {"", "I", "II", "III", "IV", "V", "VI", "VII", "VIII", "IX"};
     return M[A/1000]+C[(A%1000)/100]+X[(A%100)/10]+I[A%10];
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
}
