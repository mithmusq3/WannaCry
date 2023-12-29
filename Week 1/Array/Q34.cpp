#include<bits/stdc++.h>//find amximum and minimum element
using namespace std;

void getMinMax(int a[],int n)
{   int maximum;
    int minimum;
    if(a[0]>a[1])
    {
    minimum=a[1];
    maximum=a[0];
    }
    else
    {
    minimum=a[0];
    maximum=a[1];  
    }
    for(int i=2;i<n;i++)
    {
        if(a[i]>maximum)
        {
            maximum=a[i];
        }
        if(a[i]<minimum)
        {
            minimum=a[i];
        }
    }
    printf("Max %d",maximum);
    printf("\n");
    printf("Min %d",minimum);
    return;
}

int main()
{
    int arr[] = { 1000, 11, 445,  1, 330, 3000 };
    int arr_size = sizeof(arr)/sizeof(arr[0]);
     
    getMinMax(arr, arr_size);
    return 0;
}