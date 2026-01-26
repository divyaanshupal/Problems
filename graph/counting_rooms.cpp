#include <bits/stdc++.h>
#pragma GCC optimize("Ofast")
#pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,avx2,fma")
#pragma GCC optimize("unroll-loops")
#define pb push_back
#define ff first
#define ss second
#define inf INT_MAX
#define int long long
#define vi vector<int>
using namespace std;
#define sorting(arr) sort(arr.begin(),arr.end())
#define all(v) (v).begin(), (v).end()
template <typename T> istream &operator>>(istream &is, vector<T> &v) { for (auto &i : v) is >> i; return is; }
 template <typename T> ostream &operator<<(ostream &os, const vector<T> &v) { for (auto &i : v) os << i << ' '; return os; }
const int MOD = 1e9 + 7;
#define nl "\n"
#define input int n; cin>>n;

void bfs(vector<vector<char>>& arr,vector<vector<int>>& vis, int i , int j , int n, int m ){
    //vis[i][j]=1;
    vector<vector<int>> dir={{-1,0},{1,0},{0,1},{0,-1}};

    queue<pair<int,int>> q;
    q.push({i,j});

    while(!q.empty()){

        auto it=q.front();
        q.pop();
        int x=it.first;
        int y=it.second;

    for(auto it:dir){
        int newi=x+it[0];
        int newj=y+it[1];

        if(newi>=0 and newi<n and newj>=0 and newj<m and arr[newi][newj]=='.'){
            if(!vis[newi][newj]){
                vis[newi][newj]=1;
                q.push({newi,newj});
            }
        }
    }
    }
}
    

void solve(){
    int n,m;
    cin>>n>>m;
    vector<vector<char>>arr(n,vector<char>(m));
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>arr[i][j];
        }
    }
    vector<vector<int>>vis(n,vector<int>(m,0));
    int count=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(!vis[i][j] and arr[i][j]=='.'){
                bfs(arr, vis, i,j,n,m);
                count++;
            }
        }
    }

    cout<<count;
}

//testing again little 
signed main() {
 
    cin.tie(NULL)->sync_with_stdio(false);
    #ifndef ONLINE_JUDGE
    freopen("/home/divyanshu-pal/Documents/Problems/input.txt", "r", stdin);
    freopen("/home/divyanshu-pal/Documents/Problems/output.txt", "w", stdout);
    #endif
 
    // int t;
    // cin>>t;
    // while(t--){
    //     solve();
    // }
    solve();
}