/* problem link: https://leetcode.com/problems/course-schedule-ii/ */



class Solution {
public:
    vector<int> findOrder(int numCourses, vector<vector<int>>& prerequisites) {
        vector<vector<int>>adj(numCourses);
        vector<int>indeg(numCourses);
        for(auto edge:prerequisites){
            adj[edge[1]].push_back(edge[0]);
            indeg[edge[0]]++;
        }
        queue<int>q;
        for(int i=0;i<indeg.size();i++){
            if(indeg[i]==0)
                q.push(i);
        }
        vector<int>order,empty;
        while(!q.empty()){
            int top=q.front();q.pop();
            order.push_back(top);
            for(int v:adj[top]){
                indeg[v]--;
                if(indeg[v]==0) q.push(v);
            }
        }
        if(order.size()==numCourses) return order;
        else return empty;

    }
};

