#include <iostream>
#include <vector>

using namespace std;

int main() {
    vector<int> arr1 = {1, 2, 3, 4, 5, 6 ,1,2,3,4,6};
    int odd=0;
    for(int i=0;i<arr1.size();i++)odd^=arr1[i];

    cout<<odd;

    return 0;
}
