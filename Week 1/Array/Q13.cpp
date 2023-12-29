#include<bits/stdc++.h>//find 3 elements
using namespace std;

void find_3(int arr[],int n)
{
    int max=n-1;
    int min=0;
    int i;
    int *smaller=new int[n];
    smaller[0]=-1;
    for(int i=1;i<n;i++)
    {
        if(arr[i]<=arr[min])
        {
            min=i;
            smaller[i]=-1;
        }
        else
        {
            smaller[i]=min;
        }
        
    }
    int *larger=new int[n];
    larger[n-1]=-1;
    for(int i=n-2;i>=0;i--)
    {
        if(arr[i]>=arr[max])
        {
            max=i;
            larger[i]=-1;
        }
        else
        {
            larger[i]=max;
        }
        
    }
    for(int i=0;i<n;i++)
    {
        if(smaller[i]!=-1 && larger[i]!=-1)
        {
            cout<<arr[smaller[i]]<<" "<<arr[i]<<" "<<arr[larger[i]];
            delete[] smaller;
            delete[] larger;
            return;
        }
    }
    cout<<"No triplet found";
    delete[] smaller;
    delete[] larger;
    return;
}

int main()
{
    int array[]={1,1,2,3,4,2,5};
    int size=sizeof(array)/sizeof(array[0]);
    find_3(array,size);
    return 0;
}