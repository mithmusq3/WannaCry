#include<bits/stdc++.h>//max repeating element
using namespace std;
void findMajority(int a[],int n)
{
    int maxcount=0;
    int index=-1;
    for(int i=0;i<n;i++)
    {
        int count=0;
        for(int j=0;j<n;j++)
        {
            if(a[i]==a[j])
            {
                count++;
            }
        }
        if(count>maxcount)
        {
            maxcount=count;
            index=i;
        }
    }
        if(maxcount>n/2)
        {
            cout<<"Max repeating element"<<a[index]<<endl;
        }
        else
        {
            cout<<"No majority element";
        }
    
}
int main()
{
    int arr[] = { 1, 1, 2, 1, 3, 5, 1 };
    int n = sizeof(arr) / sizeof(arr[0]);
    findMajority(arr, n);
    return 0;
}