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
    
    //vector<pair<pair<int,int>,char>> direction={{{-1,0},'L'},{{1,0},'R'},{{0,1},'D'},{{-1,0},'U'}};

    vector<pair<pair<int,int>,char>> direction={
        {{-1,0},'U'},
        {{1,0},'D'},
        {{0,-1},'L'},
        {{0,1},'R'}
    };

    //vector<vector<int>> parent(n,vector<int>(m,-1));
    vector<vector<pair<int,int>>> parent(n, vector<pair<int,int>>(m, {-1,-1}));
    vector<vector<char>> movement(n,vector<char>(m,'?'));

    int strt_x=-1, strt_y=-1, end_x=-1, end_y=-1;

    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(arr[i][j]=='A'){
                strt_x=i;
                strt_y=j;
            }
            if(arr[i][j]=='B'){
                end_x=i;
                end_y=j;
            }
        }
    }
    queue<pair<int,int>>q;
    q.push({strt_x,strt_y});
    vis[strt_x][strt_y]=1;
    while(!q.empty()){
        auto it=q.front();
        q.pop();
        int x=it.first;
        int y=it.second;

        for(auto dir:direction){
            int newx=x+dir.first.first;
            int newy=y+dir.first.second;
            char move=dir.second;

            if(newx>=0 and newx<n and newy>=0 and newy<m and arr[newx][newy]!='#' and !vis[newx][newy]){
                vis[newx][newy]=1;
                parent[newx][newy]={x,y};
                movement[newx][newy]=move;
                q.push({newx,newy});
            }
        }
    }

    if(!vis[end_x][end_y]){
        cout<<"NO"<<nl;
        return ;
    }

    string path;
    int x=end_x , y=end_y;
    while(!(x==strt_x && y==strt_y)){
        path.push_back(movement[x][y]);
        auto p=parent[x][y];
        x=p.first;
        y=p.second;
    }
    cout<<"YES"<<endl;
    cout<<path.size()<<endl;
    reverse(path.begin(),path.end());
    cout<<path<<endl;
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