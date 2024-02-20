#include <atcoder/all>
#include <bits/stdc++.h>
typedef long long ll;
using namespace std;
#define rep(i,a,n) for (int i = a; i < (n); i++)
template<typename T> inline bool chmax(T& a, T b) { return ((a < b) ? (a = b, true) : (false)); }
template<typename T> inline bool chmin(T& a, T b) { return ((a > b) ? (a = b, true) : (false)); }
const int INF = 1<<29;
int main() {
    int n;
    cin >> n;
    vector<ll> a(n),s(n),t(n);
    rep(i,0,n) cin >> a[i];
    rep(i,0,n-1) cin >> s[i] >> t[i];

    
    rep(i,0,n-1){
        ll cnt;
        cnt = a[i]/s[i];
        a[i+1] += cnt*t[i];    
    }

    cout << a[n-1] << endl;

    return 0;
}