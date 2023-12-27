#include <iostream>
#include <vector>
#include <algorithm>
#include <map>

using namespace std;

int main() {
    vector<int> arr1 = {2, 3, 10, 6, 4, 8, 1};

    int max_diff = 0;
    int min_element = arr1[0];
    for(int i = 1; i < arr1.size(); i++)
    {
        if (arr1[i] - min_element > max_diff) max_diff = arr1[i] - min_element;
        if (arr1[i] < min_element) min_element = arr1[i];
    }
    cout<<max_diff;
    return 0;
}