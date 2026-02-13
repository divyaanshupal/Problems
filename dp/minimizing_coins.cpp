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

  
int solve(int target,vector<int>& arr,vector<int>&dp){
    int n=arr.size();

    if(target==0) return 0;
    
    if(dp[target]!=-1) return dp[target];

    int ans=inf;
    for(auto it:arr){
        if(it<=target) ans=min(ans,1+solve(target-it,arr,dp));
    }

    return dp[target]=ans;
}
void helper(){
    int n,target;
    cin>>n>>target;
    vi arr(n);
    cin>>arr;
    //vector<int>arr={1,2,3,4,5,6};
    vector<int>dp(target+1,-1);
    int ans = solve(target, arr, dp);
    if(ans >= inf) cout << -1;
    else cout << ans;

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
    helper();
}