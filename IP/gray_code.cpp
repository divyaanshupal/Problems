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
    
string toBinary(int x,int n){
    string s="";
    if(x==0) {
        string ans="";
        while(n--) ans+='0';
        return ans;
    }
    while(x){
        s+=char('0'+(x&1));
        x>>=1;
    }
    reverse(s.begin(),s.end());
    //while(s.size()!=n)s+='0';
    string coverUp="";
    if(s.size()!=n){
        int left=n-s.size();
        while(left--)coverUp+='0';
    }
    s=coverUp+s;
    return s;
}
void solve(){
    int n; cin>>n;
    int range=pow(2,n);
    for(int i=0;i<range;i++){
        int gray=i^(i>>1);
        cout<<toBinary(gray,n)<<nl;
    }

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