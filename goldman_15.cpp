/* problem link : https://practice.geeksforgeeks.org/problems/array-pair-sum-divisibility-problem3257/1# */


class Solution {
  public:
    bool canPair(vector<int> nums, int k) {
      int n=nums.size();
      if (n & 1)
      return false;

      unordered_map<int, int> freq;

      for (int i = 0; i < n; i++)
      freq[(nums[i] % k)]++;

      for (int i = 0; i < n; i++) {

      int rem = (nums[i] % k);

      if (2 * rem == k) {

      if (freq[rem] % 2 != 0)
      return false;
      }

      else if (rem == 0) {
      if (freq[rem] & 1)
      return false;
      }

      else if (freq[rem] != freq[k - rem])
      return false;
      }
      return true;// Code here.
    }
};