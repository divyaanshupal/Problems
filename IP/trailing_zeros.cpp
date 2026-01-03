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

// int factorial(int x){
//     if(x==1) return 1;
//     if(x==0) return 1;

//     return x*factorial(x-1);
// }
    

void solve(){
    int n; cin>>n;

    // int fact=factorial(n);
    // int cnt=0;
    // while(true){
    //     int rem=fact%10;
    //     fact=fact/10;
    //     if(rem==0) cnt++;
    //     else{
    //         cout<<cnt;
    //         return;
    //     }
    // }

    int cnt=0;
    while(n>0){
        n/=5;
        cnt+=n;
    }
    cout<<cnt;
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