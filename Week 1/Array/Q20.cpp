#include<bits/stdc++.h>//finds duplicates when elements are then than size of the arry
using namespace std;
vector<int> duplicate(int a[],int n)
{
    vector<int> ans;
    for(int i=0;i<n;i++)
    {
        int index=a[i]%n;
        a[index]+=n;
    }
    for(int i=0;i<n;i++)
    {
        if((a[i]/n)>=2)
        {
            ans.push_back(i);
        }
    }
    return ans;

}
int main()
{
        int arr[]={1,2,3,5,3,5};
        int size=sizeof(arr)/sizeof(arr[0]);
        cout<<"Repeating elements";
        vector<int> ans=duplicate(arr,size);
        for(auto x: ans)
        {
            cout<<x<<" ";
        }

        return 0;
}