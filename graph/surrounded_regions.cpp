#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<vector<int>> dir={{-1,0},{1,0},{0,-1},{0,1}};
    void dfs(int i, int j , vector<vector<int>>& vis ,vector<vector<char>>& board ){
        int n=board.size();
        int m=board[0].size();
        vis[i][j]=1;
        for(auto it:dir){
            int new_i=i+it[0];
            int new_j=j+it[1];
            if(new_i>=0 and new_i<n and new_j>=0 and new_j<m){
                if(!vis[new_i][new_j] and board[new_i][new_j]=='O'){
                    dfs(new_i,new_j, vis,board);
                }
            }
        }
    }
    void solve(vector<vector<char>>& board) {
        int n=board.size();
        int m=board[0].size();
        vector<vector<int>> vis(n,vector<int>(m,0));
        //traversing first row and last row
        for(int j=0;j<m;j++){
            if(!vis[0][j] and board[0][j]=='O'){
                dfs(0,j,vis,board);
            }
            if(!vis[n-1][j] and board[n-1][j]=='O'){
                dfs(n-1,j,vis,board);
            }
        }
        //first column and last column
        for(int i=0;i<n;i++){
            if(!vis[i][0] and board[i][0]=='O'){
                dfs(i,0,vis,board);
            }
            if(!vis[i][m-1] and board[i][m-1]=='O'){
                dfs(i,m-1,vis,board);
            }
        }

        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(!vis[i][j] and board[i][j]=='O') board[i][j]='X';
            }
        }
    }
};