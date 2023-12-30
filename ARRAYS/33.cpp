#include <bits/stdc++.h>
using namespace std;

//Intersection of n sets

int main(){
    int n;
    cin >> n;
    vector<vector<int>> v;
    for(int i=0; i<n; i++){
        int l;
        cin>> l;
        vector<int> el;
        int ele;
        for(int j=0; j<l; j++){
            cin>> ele;
            el.push_back(ele);
        }
        v.push_back(el);
    }
    int min_l = INT_MAX;
    int vminIndex;
    for(int i=0; i<v.size(); i++){
        sort(v[i].begin(), v[i].end());

        if (min_l > (v[i]).size()) {
            min_l = (v[i]).size();
            vminIndex = i;
        }
    }
    map<int,int> m;
    for (auto it = v[vminIndex].begin(); it!=v[vminIndex].end(); it++){
        if (m.find(*it)!=m.end()){
            m[*it]++;
        }
        else m[*it] = 1;
    }
    vector<int> res;
    for(auto it = m.begin(); it!=m.end(); it++){
        int el = it->first;
        int freq = it->second;

        for (int j=0; j<v.size(); j++){
            if (j!=vminIndex){
                if (binary_search(v[j].begin(), v[j].end(), el)){
                    int l = lower_bound(v[j].begin(), v[j].end(), el) - v[j].begin();
                    int u = upper_bound(v[j].begin(), v[j].end(), el) - v[j].begin();

                    if (u-l+1 < freq){
                        freq = u-l+1;
                    }
                }
                else {
                    freq = 0;
                    break;
                }
            }
        }
        if (freq!=0){
            for(int i=0; i<freq; i++){
                res.push_back(el);
            }
        }
    }
    for(int i=0; i<res.size(); i++){
        cout << res[i] << " ";
    }
}