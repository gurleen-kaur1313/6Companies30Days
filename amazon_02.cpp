/* problem link: https://leetcode.com/problems/longest-mountain-in-array/ */


class Solution {
public:
    int longestMountain(vector<int>& arr) {
        int ans=0;
        int count=0;
        int n=arr.size();
        for(int i=1;i<n;i++)
        {
            if(arr[i]==arr[i-1])
                count=0;
            else if(arr[i]>arr[i-1])
                count++;
            else if(count>0)
            {
                    while(i<n and arr[i]<arr[i-1])
                    {
                        count++; i++;
                    }
                    ans = max(ans,count+1);
                    count=0 ;i--;
            }
        }
        return ans;
    }
};
