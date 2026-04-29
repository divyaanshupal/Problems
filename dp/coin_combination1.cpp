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

int helper(int idx, vector<vector<int>>& dp ,vector<int>& arr , int tg){
    int n=arr.size();
    if(tg==0) return 1;
    if(tg<0) return 0;
    if(idx>=n) return 0;
    if(dp[idx][tg]!=-1) return dp[idx][tg];

    int include =0;
    if(arr[idx]<=tg) include=helper(idx,dp,arr,tg-arr[idx]);
    int exclude= helper(idx+1,dp,arr,tg);
    
    return dp[idx][tg]=(include+exclude)% MOD;
}

int solve(){
    int n,tg;
    cin>>n>>tg;
    vector<vector<int>> dp(n,vector<int>(tg+1,-1));
    vi arr(n);
    cin>>arr;
    cout<<helper(0,dp,arr,tg);
    return 0;
}


//testing again little 
signed main() {
 
    cin.tie(NULL)->sync_with_stdio(false);
    #ifndef ONLINE_JUDGE
    freopen("/home/divyanshu-pal/Documents/Problems/input.txt", "r", stdin);
    freopen("/home/divyanshu-pal/Documents/Problems/output.txt", "w", stdout);
    #endif
 
    int t;
    //cin>>t;
    t=1;
    while(t--){
        solve();
    }
    //helper();
}