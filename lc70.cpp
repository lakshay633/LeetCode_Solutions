// class Solution {
// public:
//     int climbStairs(int n) {
//         if (n < 0)
//             return 0;
//         if (n == 0 || n == 1)
//             return 1;

//         vector<int> memo(n + 1, 0);
//         memo[0] = memo[1] = 1;

//         return solve(n, memo);
//     }

//     int solve(int n, vector<int>& memo) {
//         if (memo[n] != 0)
//             return memo[n];

//         memo[n] = solve(n - 1, memo) + solve(n - 2, memo);
//         return memo[n];
//     }
// };
#include <vector>

class Solution {
public:
    int climbStairs(int n) {
        if (n < 0)
            return 0;
        if (n <= 2)
            return n;

        std::vector<int> memo(n + 1, 0);
        memo[0] = 1;
        memo[1] = 1;
        memo[2] = 2;

        for (int i = 3; i <= n; i++) {
            memo[i] = memo[i - 1] + memo[i - 2];
        }

        return memo[n];
    }
};
