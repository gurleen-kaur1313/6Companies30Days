/* problem link: https://leetcode.com/problems/minimum-size-subarray-sum/ */


class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int i=0;
        int j=0;
        int sum=0;
        int ans=INT_MAX;
        int n=nums.size();
        while(j<n){
            sum+=nums[j];
            if(sum>=target){
                while(sum>=target){
                   ans=min(ans,j-i+1);
                    sum-=nums[i];
                    i++;
                }
            }
            j++;
        }
        if(ans==INT_MAX || ans<0) return 0;
        return ans;
    }
};

