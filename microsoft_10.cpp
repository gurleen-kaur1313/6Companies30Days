/* problem link: https://practice.geeksforgeeks.org/problems/stickler-theif-1587115621/1/# */



class Solution
{
    public:
    //Function to find the maximum money the thief can get.
    int FindMaxSum(int arr[], int n)
    {
         int incl=arr[0];
       int excl=0;
       int new_excl;
       for(int i=1;i<n;i++){
         new_excl=(incl>excl) ? incl : excl;
           incl=excl+arr[i];
           excl=new_excl;
       }
       return ((incl>excl) ? incl : excl);
    }
};
