#include <atcoder/all>
#include <bits/stdc++.h>
typedef long long ll;
using namespace std;
#define rep(i,a,n) for (int i = a; i < (n); i++)
template<typename T> inline bool chmax(T& a, T b) { return ((a < b) ? (a = b, true) : (false)); }
template<typename T> inline bool chmin(T& a, T b) { return ((a > b) ? (a = b, true) : (false)); }
const int INF = 1<<29;
int main() {
    int n,k;
    cin >> n >> k;
    vector<int> a(n);
    ll ans=0;
    rep(i,0,k) ans+=i+1;
    rep(i,0,n) cin >> a[i];
    sort(a.begin(),a.end());
    a.erase(unique(a.begin(),a.end()),a.end());
    rep(i,0,a.size()){
        if(a[i]<=k) ans-=a[i];
    }
    cout << ans << endl;
    return 0;
}