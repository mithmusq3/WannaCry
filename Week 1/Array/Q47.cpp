#include<bits/stdc++.h>//find maximum repeating element
using namespace std;
int maxRepeating(int a[],int n,int k)
{
   for(int i=0;i<n;i++)
   {
    a[a[i]%k]+=k;
   }
   int max=a[0];
   int result=0;
   for(int i=1;i<n;i++)
   {
    if(a[i]>max)
    {
        max=a[i];
        result=i;
    }
   }
   return result;
}

int main()
{
   int arr[] = {2, 3, 3, 5, 3, 4, 1, 7};
    int n = sizeof(arr)/sizeof(arr[0]);
    int k = 8;
 
    cout << "The maximum repeating number is " <<
         maxRepeating(arr, n, k) << endl;
 
    return 0;
}