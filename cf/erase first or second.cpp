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
    

int solve(){
    int n; 
    cin>>n;
    string str;
    cin>>str;
    int  cnt=0;
    unordered_set<char> st;
    for(int i=0;i<n;i++){
        if(st.find(str[i])==st.end()){
            cnt+=n-i;
            st.insert(str[i]);
        }
    }
    return cnt;

}

//testing again little 
signed main() {
 
    cin.tie(NULL)->sync_with_stdio(false);

    int t;
    cin>>t;
    while(t--){
        cout<<solve()<<nl;
    }
    //solve();
}