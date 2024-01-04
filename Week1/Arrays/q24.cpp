#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int i = 4, j = 1;
    float x = 8.0;
    if(j>i)cout<<"invalid";
    else{
        int n=(i*(i+1))/2;
        vector<double> v(n,0.0);
        int ind=0;
        v[0]=x;
        for(int row=1;row<=i;row++){
            for(int col=1;col<=row;col++){
                x=v[ind];
                if(x>1.0) {
                    v[ind] = 1.0;
                    x-=1.0;
                    v[ind+row]+=x/2;
                    v[ind+row+1]+=x/2;
                }
                else v[ind]=x;
                ind++;
            }
        }
        cout<<v[((i*(i-1))/2)+(j-1)];
    }


    return 0;
}














