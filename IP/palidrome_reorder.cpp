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
    string str;
    cin>>str;
    unordered_map<char,int> mp;
    for(char c:str){
        mp[c]++;
    }
    int oddcnt=0;
    int oddFreq=0;
    char oddChar='\0';
    string ans="";
    for(auto it:mp){
        int n=it.second;
        if(it.second%2!=0) {
            oddcnt++;
            oddFreq=n;
            oddChar=it.first;
        }
        else{
            n=n/2;
            while(n--){
                ans+=it.first;
            }
        }
    }
    if(oddcnt>1){
        cout<<"NO SOLUTION";
        return;
    }
    
    string original=ans;
    reverse(ans.begin(),ans.end());
    
    while(oddFreq--) original+=oddChar;
    original+=ans;

    cout<<original;

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