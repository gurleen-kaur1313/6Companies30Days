/*problem link: https://practice.geeksforgeeks.org/problems/count-the-subarrays-having-product-less-than-k1708/1/  */

class Solution{
  public:
    int countSubArrayProductLessThanK(const vector<int>& a, int n, long long k) {
        int i=0; int j=0;
        long long pro=1;
        int ans=0;
        while(j<n){
            pro=pro*a[j];
            if(pro>=k){
            while(pro>=k && i<=j){
                pro=pro/a[i];
                i++;
            }
            }

            ans+=j-i+1;

            j++;
        }
        return ans;
    }
};
