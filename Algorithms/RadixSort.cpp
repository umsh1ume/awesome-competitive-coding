#include<bits/stdc++.h>
using namespace std;
void count_sort(int arr[], int n, int powr)
{
    int output[n];
    int i, count[10] = {0};
    for (i = 0; i < n; i++)
        count[ (arr[i]/powr)%10 ]++;
    for (i = 1; i < 10; i++)
        count[i] += count[i - 1];


    for (i = n - 1; i >= 0; i--)
    {
        output[count[ (arr[i]/powr)%10 ] - 1] = arr[i];
        count[ (arr[i]/powr)%10 ]--;
    }


    for (i = 0; i < n; i++)
        arr[i] = output[i];
}
void radix_sort(int a[],int n)
{
    int maxe=*max_element(a,a+n);
    for(int i=1;maxe/i>0;i*=10)
    {
        count_sort(a,n,i);
    }

}
int main()
{
     int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
        cin>>a[i];

    radix_sort(a,n);
    for(int i=0;i<n;i++)
        cout<<a[i]<<" ";
}
