#include <bits/stdc++.h>
#pragma GCC optimize("Ofast")
#pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,avx2,fma")
#pragma GCC optimize("unroll-loops")
#define pb push_back
#define pop pop_back
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
    
void calculate(vector<int>& arr , int  currSum , int idx, int target, int & ans){
    if(idx==arr.size()){
        ans=min(ans,abs(target - 2*currSum));
        return;
    }
    calculate(arr,currSum+arr[idx],idx+1,target,ans);
    calculate(arr , currSum , idx+1, target,ans);
}
void solve(){
    int n;cin>>n;
    vi arr(n); cin>>arr;
    int total=accumulate(arr.begin(),arr.end(),0LL);
    int currSum=0;
    int ans=LLONG_MAX;
    calculate(arr,currSum,0,total,ans);
    cout<<ans;
}


signed main() {
 
    cin.tie(NULL)->sync_with_stdio(false);
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
 
    // int t;
    // cin>>t;
    // while(t--){
    //     solve();
    // }
    solve();
}