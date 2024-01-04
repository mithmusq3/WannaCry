#include <iostream>
#include <vector>

using namespace std;

int main() {
    vector<int> arr1 = {1, 2, 3, 4, 5, 6 ,8, 9};
    int missing=0;
    int i=0;
    for(;i<arr1.size();i++)missing^=(arr1[i]^(i+1));

    missing^=(i+1);
    cout<<missing;

    return 0;
}
