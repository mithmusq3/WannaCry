#include<bits/stdc++.h>//finding subarray with given sum
using namespace std;

void subarray(int a[],int n,int sum)
{
    for(int i=0;i<n;i++)
    {   int current_sum=a[i];
        if(current_sum==sum)
        {
            cout<<"Sum found at indices"<<i<<endl;
            return;
        }
        else
        {
        for(int j=i+1;j<n;j++)
        {
            current_sum+=a[j];
            if(current_sum==sum)
            {
                cout<<"Sum found at indices "<<i<<" and "<<j<<endl;
                return;
            }
        }
        }
    }
    cout<<"No subarray found";
    return;
}


int main()
{
    int a[]={1,4,0,0,3,10,5};
    int n=sizeof(a)/sizeof(a[0]);
    int sum=8;
    subarray(a,n,sum);
    return 0;
}

