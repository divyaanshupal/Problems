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
    
void solve() {
    int n, a, b;
    cin >> n >> a >> b;

    // A permutation with wins for only one player is impossible.
    // Every cycle in a permutation of length >= 2 must contain 
    // at least one increase and one decrease.
    if (a + b > n || (a > 0 && b == 0) || (b > 0 && a == 0)) {
        cout << "NO" << nl;
        return;
    }

    cout << "YES" << nl;

    vi v1(n), v2(n);
    for (int i = 0; i < n; i++) {
        v1[i] = v2[i] = i + 1;
    }

    // If there are rounds that aren't draws, we take a block of 
    // size (a+b) and rotate it. Rotating by 'a' positions left 
    // ensures exactly 'a' elements are smaller than their original 
    // values and 'b' elements are larger.
    if (a + b > 0) {
        rotate(v2.begin(), v2.begin() + a, v2.begin() + a + b);
    }

    cout << v1 << nl;
    cout << v2 << nl;
}
// void solve(){
//     int n,a,b;
//     cin>>n>>a>>b;
//     if(a+b>n){
//         cout<<"NO"<<nl;
//         return;
//     }
//     cout<<"YES"<<nl;

//     vector <int> arr,brr;
//     int low=1, high=n;

//     //player a wins 
//     for(int i=0;i<a;i++){
//         arr.pb(high--);
//         brr.pb(low++);
//     }

//     //player b wins 
//     for(int i=0;i<b;i++){
//         arr.pb(low++);
//         brr.pb(high--);
//     }

//     while(low<=high){
//         arr.pb(low);
//         brr.pb(low);
//         low++;
//     }
//     cout<<arr<<nl;
//     cout<<brr<<nl;
// }


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