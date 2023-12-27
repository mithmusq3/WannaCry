#include <iostream>
#include <vector>
#include <algorithm>
#include <map>
using namespace std;
int c=0;
void merge(vector<int> &v, int low, int high, int mid) {
    vector<int> temp(high-low + 1,0);
    int l = low;
    int r = mid + 1;
    int i = 0;
    while (l <= mid && r <= high) {
        if (v[l] > v[r]) {
            temp[i] = v[r];
            i++;
            r++;
            c += (mid-l+1);
        } else {
            temp[i] = v[l];
            l++;
            i++;
        }
    }
    while (l <= mid) {
        temp[i] = v[l];
        l++;
        i++;

    }
    while (r <= high) {
        temp[i] = v[r];
        i++;
        r++;
    }
    for (int j = 0; j < temp.size(); j++) {
        v[low + j] = temp[j];
    }
}

void mergeSo(vector<int> &v, int low, int high) {
    if (low == high)
        return;
    int mid = (low + high) / 2;
    mergeSo(v, low, mid);
    mergeSo(v, mid + 1, high);
    merge(v, low, high, mid);
}

int main() {
    vector<int> v = {8, 4, 2, 1};
    mergeSo(v, 0, v.size() - 1);
    cout<<c;
    return 0;
}
