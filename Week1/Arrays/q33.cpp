#include <iostream>
#include <vector>
#include <algorithm>
#include <map>

using namespace std;

//template for array codes

void printVector(vector <string>& vec){
    for(int i=0;i<vec.size();i++) cout<<vec[i]<<":";
    return;
}
int main() {
    vector<string> arr1 = {"a1","b2","c3","d4","hey69","bye420"};
    int n=arr1.size();
    vector<string> st(n,"");
    vector<string> in(n,"");

    for(int i=0;i<n;i++){
        string string1="";
        string int1="";
        for(int j=0;j<arr1[i].size();j++){
            if(arr1[i][j]>='a'){
                string1+=arr1[i][j];
            }
            else {
                int1+=arr1[i][j];
            }
        }
        st[i]=string1;
        in[i]=int1;
    }
    sort(st.begin(),st.end());
    sort(in.begin(),in.end());
    st.insert(st.end(),in.begin(),in.end());
    printVector(st);




    return 0;
}