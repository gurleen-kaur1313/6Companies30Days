/* problem link: https://practice.geeksforgeeks.org/problems/leaders-in-an-array-1587115620/1/# */



class Solution{
    //Function to find the leaders in the array.
    public:
    vector<int> leaders(int a[], int n){
        stack<int> st;
       st.push(a[n-1]);

       for(int i=n-2;i>=0;i--)
       {
           if(st.top()<=a[i])
               st.push(a[i]);
       }

       vector<int> ans;
       while(!st.empty())
       {
           ans.push_back(st.top());
           st.pop();
       }

       return ans;

    }
};

