#include <atcoder/all>
#include <bits/stdc++.h>
typedef long long ll;
using namespace std;
#define rep(i,a,n) for (int i = a; i < (n); i++)
template<typename T> inline bool chmax(T& a, T b) { return ((a < b) ? (a = b, true) : (false)); }
template<typename T> inline bool chmin(T& a, T b) { return ((a > b) ? (a = b, true) : (false)); }
const int INF = 1<<29;
int main() {
    int n; cin >> n;
    vector<int> p(n);
    int cnt=0,mini=INF;
    rep(i,0,n){
        cin >> p[i];
        if(mini>=p[i]) cnt++;
        chmin(mini,p[i]);
    }
    cout << cnt << endl;
    return 0;
}