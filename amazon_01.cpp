/* problem link: https://practice.geeksforgeeks.org/problems/maximum-profit4657/1 */


class Solution {
  public:
    int maxProfit(int K, int N, int A[]) {
        int profit[K + 1][N + 1];

        for (int i = 0; i <= K; i++)
        profit[i][0] = 0;

        for (int j = 0; j <= N; j++)
        profit[0][j] = 0;

        for (int i = 1; i <= K; i++) {
           for (int j = 1; j < N; j++) {
           int max_so_far = INT_MIN;

              for (int x = 0; x < j; x++)
                 max_so_far = max(max_so_far,- A[x] + profit[i - 1][x]);

            profit[i][j] = max(profit[i][j - 1], A[j]+max_so_far);
            }
        }

         return profit[K][N - 1];
    }
};
