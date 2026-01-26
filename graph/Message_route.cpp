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

// void dfs(int node , vector<int> adj[],vector<int>& vis){
//     vis[node]=1;
//     for(auto it:adj[node]){
//         if(!vis[it]){
//             dfs(it,adj,vis);
//         }
//     }
// }   

void solve(){
    int n,m;
    cin>>n>>m;
    vector<int> adj[n+1];
    for(int i=0;i<m;i++){
        int u,v;
        cin>>u>>v;;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    vector<int> vis(n+1,0);
    vector<int> parent(n+1,-1);
    parent[1]=1;
    
    queue<pair<int,int>>q;
    q.push({1,1});
    vis[1]=1;
    while(!q.empty()){
        auto it=q.front();
        q.pop();
        int node=it.first;
        int len=it.second;

        if(node==n){
            cout<<len<<nl;
            break;
        }

        for(auto it:adj[node]){
            if(!vis[it]){
                vis[it]=1;
                parent[it]=node;
                q.push({it,len+1});
            }
        }
    }

    if(!vis[n]){
        cout<<"IMPOSSIBLE";
        return;
    }

    vector<int> ans;
    int x=n;
    while(x!=1){
        ans.pb(x);
        x=parent[x];
    }
    ans.pb(1);
    reverse(ans.begin(),ans.end());
    for(auto it:ans){
        cout<<it<<" ";
    }

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