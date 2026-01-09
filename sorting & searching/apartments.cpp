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
    int n,m,k;
    cin>>n>>m>>k;
    vi arr(n); cin>>arr;
    vi brr(m); cin>>brr;
    sorting(arr); sorting(brr);

    // cout<< arr<<nl;
    // cout<<brr<<nl;
    int i=0,j=0,cnt=0;
    while(i<n and j<m){
        if(arr[i]==brr[j] or (brr[j]>=arr[i]-k and brr[j]<=arr[i]+k)) {
            cnt++; i++;j++;
        }
        else if (brr[j]<arr[i]) j++;
        else i++;

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