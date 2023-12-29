#include<bits/stdc++.h>//water in jth glass in ith row
using namespace std;
float findWater(int i,int j,float x)
{
    if(j>i)
    {
        printf("Incorrect input");
        return;
    }
    float glass[i*(i+1)/2]={0.0};
    int index=0;
    glass[index]=x;
    for(int row=1;row<=i;++row)
    {
        for(int column=1;column<=row;++column,++index)
        {
            x=glass[index];
            glass[index]=(x>=1.0)?1.0:x;
            x=(x>=1.0)?(x-1):0.0;
            glass[index+row]+=x/2;
            glass[index+row+1]+=x/2;
        }
    }
    return glass[i*(i-1)/2+j-1];

}
int main()
{
    int i=2;
    int j=2;
    float x=2.0;
    printf("Amount of water in jth glass in ith row is %f",findWater(i,j,x));
    return 0;
}