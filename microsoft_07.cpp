/* problem link: https://practice.geeksforgeeks.org/problems/length-of-largest-region-of-1s-1587115620/1/# */

class Solution
{
    public:
    //Function to find unit area of the largest region of 1s.
    void dfs(vector<vector<int>>&a,int i,int j,int n,int m,int &count)
   {
       if(i<0||i>=n||j<0||j>=m)
       return ;
       if(a[i][j]==0)
       return ;
        count++;
       a[i][j]=0;
       dfs(a,i+1,j,n,m,count);
       dfs(a,i-1,j,n,m,count);
       dfs(a,i,j+1,n,m,count);
       dfs(a,i,j-1,n,m,count);
       dfs(a,i+1,j-1,n,m,count);
       dfs(a,i-1,j-1,n,m,count);
       dfs(a,i+1,j+1,n,m,count);
       dfs(a,i-1,j+1,n,m,count);
   }
    int findMaxArea(vector<vector<int>>& grid) {
        int n=grid.size();
      int m=grid[0].size();
      int maxi=0;
      for(int i=0;i<n;i++)
      {
          for(int j=0;j<m;j++)
          {
              int count=0;
              if(grid[i][j]==1)
                  dfs(grid,i,j,n,m,count);
                  maxi=max(maxi,count);

          }
      }
      return maxi;
    }
};
