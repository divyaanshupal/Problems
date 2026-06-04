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
    vi arr(n);
    cin>>arr;

    vector<pair<int,int>> brr(n);
    for(int i=0;i<n;i++){
        brr[i]={arr[i],i};
    }
    sort(brr.begin(),brr.end());
    vi prefix(n);
    prefix[0]=brr[0].first;

    for(int i=1;i<n;i++){
        prefix[i]=prefix[i-1]+brr[i].first;
    }

    vector <int> ans(n);
    ans[n-1]=n-1;
    for(int i=n-2;i>=0;i--){
        if(prefix[i]>=brr[i+1].first){
            ans[i]=ans[i+1];
        }
        else{
            ans[i]=i;
        }
    }

    vector<int> ordered_ans(n);
    for(int i=0;i<n;i++){
        int org_idx=brr[i].second;
        ordered_ans[org_idx]=ans[i];
    }

    cout<<ordered_ans<<nl;

}

//testing again little 
signed main() {
 
    cin.tie(NULL)->sync_with_stdio(false);

    int t;
    cin>>t;
    while(t--){
        solve();
    }
    //solve();
}
