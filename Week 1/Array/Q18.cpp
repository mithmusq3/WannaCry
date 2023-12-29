#include<bits/stdc++.h>//sum closest to 0
using namespace std;

bool compare(int x,int y)
{
    return abs(x)<abs(y);
}
int find_minsum(int a[],int n)
{
    sort(a,a+n,compare);
    int min=INT_MAX;
    int x,y;
    for(int i=1;i<n;i++)
    {
        if(abs(a[i-1]+a[i])<min)
        {
            min=abs(a[i-1]+a[i]);
            x=i-1;
            y=i;
        }
    }
    cout<<"The two elements with minimum sum are"<<a[x]<<"  "<<a[y];

}
int main()
{
    int arr[]={1,60,-10,70,-80,85};
    int n=sizeof(arr)/sizeof(arr[0]);
    find_minsum(arr,n);
    return 0;
}