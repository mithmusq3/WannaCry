#include<bits/stdc++.h>//find maximum difference
using namespace std;
int max_diff(int a[],int n)
{
    int max_difference=a[1]-a[0];
    int min_element=a[0];
    for(int i=1;i<n;i++)
    {
        if(a[i]-min_element>max_difference)
        {
            max_difference=a[i]-min_element;
        }
        if(a[i]<min_element)
        {
            min_element=a[i];
        }
    }
    return max_difference;

}

int main()
{
    int arr[]={1,2,90,10,110};
    int n=sizeof(arr)/sizeof(arr[0]);
    cout<<"Maximum difference is "<<max_diff(arr,n);
    return 0;
}