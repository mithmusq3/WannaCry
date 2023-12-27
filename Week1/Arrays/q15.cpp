#include <iostream>
#include <vector>
#include <climits>

using namespace std;

int main() {
    vector<vector<int>> matrix = {{0, 0, 0, 1}, {0, 1, 1, 1}, {0, 0, 1, 1}, {0, 0, 0, 0}};
    int max_1_number = 0;
    int max_1_row = -1;
    int row_size = matrix[0].size();

    for (int i = 0; i < matrix.size(); i++) {
        int count_1s = 0;

        for (int j = 0; j < matrix[i].size(); j++) {
            if (matrix[i][j] == 1) {
                count_1s = row_size - j;
                break; //
            }
        }

        if (count_1s > max_1_number) {
            max_1_number = count_1s;
            max_1_row = i;
        }
    }

    cout << max_1_row + 1;

    return 0;
}
