#include <iostream>
#include <vector>
#include <algorithm>
#include <random>

using namespace std;

void printVector(vector <int>& vec){
    for(int i=0;i<vec.size();i++) cout<<vec[i]<<":";
}

// Fisher–Yates shuffle Algorithm

int main() {
    random_device rd;
    mt19937 generator(rd());
    vector<int> arr1 = {2, 3, 10, 6, 4, 8, 1};

    int n=arr1.size();
    for(int i=n-1;i>0;i--){
        uniform_int_distribution<int> distribution(0, i);
        int ind = distribution(generator);
        swap(arr1[i],arr1[ind]);
    }
    printVector(arr1);
    return 0;
}
