#include<bits/stdc++.h>
using namespace std;

vector<int> getIntersection(vector<vector<int>> sets){
    vector<int> res;
    int smallSetInd;
    int mini=INT_MAX;
    for(int i=0; i<sets.size(); i++){
        if(sets[i].size()<mini){
            mini=sets[i].size();
            smallSetInd=i;
        }
    }
    unordered_map<int, int>mpp;
    for(auto it:sets[smallSetInd]) mpp[it]++;
    for(auto it:mpp){
        int el=it.first;
        int freq=it.second;

        bool bFound=true;

        for(int j=0; j<sets.size(); j++){
            if(j!=smallSetInd){
                if(binary_search(sets[j].begin(), sets[j].end(), el)){
                    int l=lower_bound(sets[j].begin(), sets[j].end(), el)-sets[j].begin();
                    int r=upper_bound(sets[j].begin(), sets[j].end(), el)-sets[j].begin();

                    if((r-l) < freq) freq=r-l;
                }
                else{
                    bFound=false;
                    break;
                }
            }
        }

        if(bFound){
            for(int k=0; k<freq; k++) res.push_back(el);
        }
    }
    return res;
}

int main(){
    vector<vector<int>> sets;
    vector<int> set1={1, 1, 2, 2, 5};
    vector<int> set2={1, 1, 4, 3, 5, 9};
    vector<int> set3={1, 1, 2, 3, 5, 6};
    sets.push_back(set1);
    sets.push_back(set2);
    sets.push_back(set3);
    vector<int> res=getIntersection(sets);
    for(auto it:res) cout<<it<<" ";
}