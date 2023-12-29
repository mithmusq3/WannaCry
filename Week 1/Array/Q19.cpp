#include<bits/stdc++.h>//finding subarry whose sum is 0
using namespace std;
bool subarrayexist(int a[],int n)
{
    for(int i=0;i<n;i++)
    {
        int sum=a[i];
        if(sum==0)
        {
            printf("1.%d  ",i);
            return 1;
        }
        for(int j=i+1;j<n;j++)
        {   
            sum+=a[j];
            if(sum==0)
            {
                printf("1.%d,2.%d  ",i,j);
                return true;
            }
        }
    }
    return false;
}
int main()
{
    int arr[]={-1,-2,3,1,6};
    int n=sizeof(arr)/sizeof(arr[0]);

    if(subarrayexist(arr,n))
    {
        printf("Subarray found");
    }
    else{
        printf("Subarray not found");
    }
    return 0;
}