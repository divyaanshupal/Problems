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
    

void solve(){
    int n,a,b;
    cin>>n>>a>>b;
    if(a+b>n){
        cout<<"NO"<<nl;
        return;
    }
    if(a==0 and b==0){
        cout<<"YES"<<nl;
        int x=2;
        while(x--){
            for(int i=1;i<=n;i++) cout<<i;
            cout<<nl;
        }
        return;
    }
    int same=n-(a+b);
    vector <int> arr,brr;
    for(int i=1;i<=same;i++){
        arr.pb(i);
        brr.pb(i);
    }
    if(a>b){
        for(int i=n;i>same;i--){
            arr.pb(i);
            brr.pb(i-1);
        }
        arr.pb()
    }
}


signed main() {
 
    cin.tie(NULL)->sync_with_stdio(false);
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
 
    int t;
    cin>>t;
    while(t--){
        solve();
    }
    // solve();
}