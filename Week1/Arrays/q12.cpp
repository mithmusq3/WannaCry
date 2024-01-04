#include <iostream>
#include <vector>
#include <algorithm>
#include <map>
#include <cmath>

using namespace std;


int main() {
    vector<int> arr1 = {4, 2, 4, 5, 2, 3, 1};
    int n = 5;
    int sum = ((n * (n + 1)) / 2);
    int sq_sum = (n * (n + 1) * (2 * n + 1)) / 6;
    int arr_sum = 0;
    int arr_sq_sum = 0;
    for (int i = 0; i < arr1.size(); i++) {
        arr_sum += arr1[i];
        arr_sq_sum += (arr1[i] * arr1[i]);
    }

    int e1 = arr_sum - sum;
    int e21 = arr_sq_sum - sq_sum;
    int e22 = (e1 * e1 - e21);
    int e2 = sqrt(e21 - e22);
    int x = (e1 + e2) / 2;
    int y = (e1 - e2) / 2;

    cout << "two numbers are -- " << x << " and " << y << endl;
    return 0;
}










