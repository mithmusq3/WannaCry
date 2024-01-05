#include<bits/stdc++.h>//find leaders in array
using namespace std;
void printLeaders(int a[],int n)
{
    for(int i=0;i<n;i++)
    {   int j;
        for(j=i+1;j<n;j++)
        {
             if(a[i]<=a[j])
             {
                break;
             }
        }
        if(j==n)
        {
            cout<<"Leader is "<<a[i]<<" ";
        }
    }
    return;
}
int main()
{
    int arr[] = {16, 17, 4, 3, 5, 2};
    int n = sizeof(arr)/sizeof(arr[0]);
    printLeaders(arr, n);
    return 0;
}