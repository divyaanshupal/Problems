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
    input
    int target; cin>>target;
    vector<pair<int,int>>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i].first;
        arr[i].second=i+1;
    }

    sorting(arr);

    for(int i=0;i<n;i++){
        int updated_target=target-arr[i].first;
        int l=i+1;
        int r=n-1;
        while(l<r){
            int sum=arr[l].first+arr[r].first;
            if(sum==updated_target){
                cout<<arr[i].second<<" "<<arr[l].second<<" "<<arr[r].second;
                return;
            }
            else if(sum<updated_target) l++;
            else r--;
        }
    }

    cout<<"IMPOSSIBLE";

}

//testing again little 
signed main() {
 
    cin.tie(NULL)->sync_with_stdio(false);
    #ifndef ONLINE_JUDGE
    freopen("/home/divyanshu-pal/Documents/Problems/input.txt", "r", stdin);
    freopen("/home/divyanshu-pal/Documents/Problems/output.txt", "w", stdout);
    #endif
 
    // int t;
    // cin>>t;
    // while(t--){
    //     solve();
    // }
    solve();
}