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
    

void solve(){
    int n;
    cin>>n;
    int a=0,b=0;
    while(n%2==0){
        a++;
        n/=2;
    }

    while(n%3==0){
        b++;
        n/=3;
    }

    if(n!=1) {cout<<-1<<nl; return ;}
    if(a>b) {cout<<-1<<nl; return; }

    cout<<2*b-a<<nl;
}

//testing again little 
signed main() {
 
    cin.tie(NULL)->sync_with_stdio(false);
    // #ifndef ONLINE_JUDGE
    // freopen("/home/divyanshu-pal/Documents/Problems/input.txt", "r", stdin);
    // freopen("/home/divyanshu-pal/Documents/Problems/output.txt", "w", stdout);
    // #endif
 
    int t;
    cin>>t;
    while(t--){
        solve();
    }
    //solve();
}