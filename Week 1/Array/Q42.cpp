#include<bits/stdc++.h>//max pri=oduct subarray
using namespace std;

int maxsubarray(int a[],int n)
{
    int max_ending_here=a[0];
    int min_ending_here=a[0];
    int max_so_far=a[0];
    for(int i=1;i<n;i++)
    {
    int temp=max({a[i],a[i]*max_ending_here,a[i]*min_ending_here});
    min_ending_here=min({a[i],a[i]*max_ending_here,a[i]*min_ending_here});
    max_ending_here=temp;
    max_so_far=max({max_so_far,max_ending_here});
    }   
    return max_so_far;
}

int main()
{
    int a[]={1,-2,-3,0,7,-8,-2};
    int n=sizeof(a)/sizeof(a[0]);
    int max_sum=maxsubarray(a,n);
    cout<<"Maximum contiguous product is "<<max_sum;
    return 0;
}
