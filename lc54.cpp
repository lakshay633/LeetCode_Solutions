#include <iostream>
#include <vector>
using namespace std;

vector<int> spiralOrder(vector<vector<int>> &matrix) {
    vector<int> result;
    if (matrix.empty() || matrix[0].empty()) {
        return result;
    }

    int top = 0, bottom = matrix.size() - 1;
    int left = 0, right = matrix[0].size() - 1;

    while (top <= bottom && left <= right) {
        // Traverse from left to right along the top row
        for (int i = left; i <= right; i++) {
            result.push_back(matrix[top][i]);
        }
        top++;

        // Traverse from top to bottom along the rightmost column
        for (int i = top; i <= bottom; i++) {
            result.push_back(matrix[i][right]);
        }
        right--;

        // Check if there are more rows and columns to traverse
        if (top <= bottom && left <= right) {
            // Traverse from right to left along the bottom row
            for (int i = right; i >= left; i--) {
                result.push_back(matrix[bottom][i]);
            }
            bottom--;

            // Traverse from bottom to top along the leftmost column
            for (int i = bottom; i >= top; i--) {
                result.push_back(matrix[i][left]);
            }
            left++;
        }
    }

    return result;
}

int main() {
    vector<vector<int>> arr{{1, 2, 3, 4}, {5, 6, 7, 8}, {9, 10, 11, 12}};
    int r = 3, c = 4;

    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;
    vector<int> res = spiralOrder(arr);
    for (int i = 0; i < res.size(); i++) {
        cout << res[i] << " ";
    }
    cout << endl;

    return 0;
}
