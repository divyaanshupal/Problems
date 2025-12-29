#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int numEnclaves(vector<vector<int>>& grid) {
        int n=grid.size();
        int m=grid[0].size();
        vector<vector<int>> vis(n,vector<int>(m,0));
        vector<vector<int>> dir={{-1,0},{1,0},{0,-1},{0,1}};
        queue<pair<int,int>> q;    
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(i==0 or i==n-1 or j==0 or j==m-1){
                    if(grid[i][j]==1) {
                        q.push({i,j});
                        vis[i][j]=1;
                    }
                }
            }
        }
        //aove we have stored all the boundary 1's  now we will visit all the 1's that are connected to the boundart 1's as they can reach the boundar ...rest will be counted and returned as answer

        while(!q.empty()){
            pair<int,int> p=q.front();
            q.pop();
            int i=p.first;
            int j=p.second;
            for(auto it:dir){
                int new_i=i+it[0];
                int new_j=j+it[1];

                if(new_i>=0 and new_i<n and new_j>=0 and new_j<m){
                    if(!vis[new_i][new_j] and grid[new_i][new_j]==1){
                        vis[new_i][new_j]=1;
                        q.push({new_i,new_j});
                    }
                }
            }
        }
        int cnt=0;
        for(int i=0;i<n;i++){
            for(int j=0;j<m ;j++){
                if(!vis[i][j] and grid[i][j]==1) cnt++;
            }
        }

        return cnt;
    }
};