#include <bits/stdc++.h>
using namespace std;

//Sort Elements by Frequency

bool compare(tuple<int, int, int> a, tuple<int, int, int> b) {
    if (get<2>(a) != get<2>(b)) {
        return get<2>(a) >  get<2>(b);
    }
    return get<1>(a) > get<1>(b);
}

void sortByFrequency(int arr[], int n){
    unordered_map<int, pair<int, int>> m;
    for(int i=0; i<n; i++){
        if (m.find(arr[i]) != m.end()){
            m[arr[i]].second++;
        }
        else{
            m[arr[i]] = {i, 1};
        }
    }
    vector<tuple<int,int,int>> v;
    for(auto it= m.begin(); it!=m.end(); it++){
        v.push_back({it->first, it->second.first, it->second.second});
    }
    sort(v.begin(), v.end(), compare);
    for (auto it = v.begin(); it != v.end(); it++) {
        for (int i = 0; i < get<2>(*it); i++) {
            cout << get<0>(*it) << " ";
        }
    }
}

int main(){
    int arr[] = {2, 5, 2, 8, 5, 6, 8, 8};
    int n = size(arr);
    sortByFrequency(arr, n);
    return 0;
}