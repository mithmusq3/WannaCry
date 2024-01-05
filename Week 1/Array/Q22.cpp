#include<bits/stdc++.h>//searching element in sorted matrix
using namespace std;
void search(int a[4][4],int n,int x)
{
    if(n==0)
    {
        printf("No elements");
    }
    int smallest=a[0][0];
    int largest=a[n-1][n-1];
    if(x<smallest || x>largest)
    {
        printf("No elements");
    }
    int i=0;
    int j=n-1;
    while(i<n && j>=0)
    {
        if(a[i][j]==x)
        {printf("Element at %d,%d",i,j);
        return;}
        if(a[i][j]>x)
        j--;
        else
        i++;
    }
    printf("No element found");
    return;
  
}
int main()
{
int arr[4][4]={10,20,30,40,
                   15,25,35,45,
                   27,29,37,48,
                   32,33,39,50};
search(arr,4,29);
return 0;
}