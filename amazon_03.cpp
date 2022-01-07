/* problem link: https://practice.geeksforgeeks.org/problems/deee0e8cf9910e7219f663c18d6d640ea0b87f87/1/# */


class Solution {
  public:
    vector<int> max_of_subarrays(vector<int> arr, int n, int k) {
        deque<int> q;
        int i=0;
        int j=0;
        vector<int> v;
        while(j<n){
            while(!q.empty() && arr[j]>q.back()) q.pop_back();
            q.push_back(arr[j]);
            if(j-i+1<k) j++;
            else if(j-i+1==k){
                v.push_back(q.front());
                if(arr[i]==q.front()) q.pop_front();
                i++;
                j++;
            }
        }
        return v;
    }
};
