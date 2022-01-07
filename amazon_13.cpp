/* problem link: https://leetcode.com/problems/rotting-oranges/ */


class Solution {
public:
    int orangesRotting(vector<vector<int>>& grid) {

    int n=grid.size();
    int m=grid[0].size();
    int cntEmpty=0;
    queue<pair<pair<int,int>,int>> q;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(grid[i][j]==2)
                q.push({{i,j},0});
            if(grid[i][j]==0)
                cntEmpty++;
        }
    }
    int dirX[] = {-1,1,0,0},dirY[] = {0,0,-1,1},new_X,new_Y;
    int rotten=0,x,y,time=0;
    pair<pair<int,int>,int> p;
    while(!q.empty()){
        p = q.front();
        x=p.first.first;
        y=p.first.second;
        time=p.second;
        q.pop();
        rotten++;
        for(int i=0;i<4;i++){
            new_X = x+dirX[i];
            new_Y = y+dirY[i];
            if(new_X>=0 && new_X<n && new_Y>=0 && new_Y<m && grid[new_X][new_Y]==1){
                grid[new_X][new_Y]=2;
                q.push({{new_X,new_Y},time+1});
            }
        }
    }
    if((rotten+cntEmpty)!=n*m)
        return -1;
    return time;
    }
};
