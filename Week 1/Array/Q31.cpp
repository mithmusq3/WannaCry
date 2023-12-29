#include<bits/stdc++.h>//move 0 to end of array
using namespace std;

void swap(int *a,int *b)
{
    int temp=*a;
    *a=*b;
    *b=temp;
}
int main()
{
    int a[]={1,2,3,0,9,0,5,6};
    int size=sizeof(a)/sizeof(a[0]);
    int j=-1;
    for(int i=0;i<size;i++)
    {
        if(a[i]!=0)
        {
            swap(&a[i],&a[++j]);
        }
    }
    for (int i = 0; i < size; i++) { 
        cout << a[i] << " ";  
    } 
    return 0;

}