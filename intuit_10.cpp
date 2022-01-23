/* problem link: https://leetcode.com/problems/number-of-provinces/ */



class Solution {
public:
    void dfs(vector<vector<int>>& graph,vector<bool>& vis,int ind){
        if(vis[ind]==true)return;
        vis[ind]=true;
        for(int i=0;i<vis.size();i++){
            if(graph[ind][i]==1 && vis[i]==false && i!=ind)
                dfs(graph,vis,i);
        }

    }


    int findCircleNum(vector<vector<int>>& graph) {
        int ans=0;
        int n=graph.size();
        vector<bool> vis(n,false);
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                if(vis[j]==false && graph[i][j]==1 )
                {
                    dfs(graph,vis,j);
                    ans++;
                }
            }
        }
        return ans;
    }
};

