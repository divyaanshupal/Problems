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
    int n; cin>>n;

    if(n==1){
    	cout<<1;
    	return;
    }

    if(n<=3){
    	cout<<"NO SOLUTION";
    	return;
    }
    // if(n==4){
    // 	cout<<
    // }
    for(int i=1;i<=n;i++){
    	if(i%2==0) cout<<i<<" ";
    }
    
    for(int i=1;i<=n;i++){
    	if(i%2!=0) cout<<i<<" ";
    }
    

}

//testing again little 
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