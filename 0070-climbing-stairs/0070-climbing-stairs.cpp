class Solution {
public:
    int climbStairsHelper(int n, vector<int>& ways) {
        if (n == 0) return 1;
        if (n < 0) return 0;
        
        if (ways[n] != -1) return ways[n];  // Memoization check

        ways[n] = climbStairsHelper(n - 1, ways) + climbStairsHelper(n - 2, ways);
        return ways[n];
    }

    int climbStairs(int n) {
        vector<int> ways(n + 1, -1);  // Initialize memoization array
        return climbStairsHelper(n, ways);
    }
};
