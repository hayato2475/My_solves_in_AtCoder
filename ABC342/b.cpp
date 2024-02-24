#include <atcoder/all>
#include <bits/stdc++.h>
typedef long long ll;
using namespace std;
#define rep(i,a,n) for (int i = a; i < (n); i++)
template<typename T> inline bool chmax(T& a, T b) { return ((a < b) ? (a = b, true) : (false)); }
template<typename T> inline bool chmin(T& a, T b) { return ((a > b) ? (a = b, true) : (false)); }
const int INF = 1<<29;
int main() {
    int n,q;
    cin >> n;
    vector<int> p(n);
    rep(i,0,n) cin >> p[i];
    cin >> q;
    vector<int> a(q),b(q);
    rep(i,0,q) {
        cin >> a[i] >> b[i];
    }
    rep(i,0,q){
        auto ans1 = find(p.begin(),p.end(),a[i]);
        auto ans2 = find(p.begin(),p.end(),b[i]);
        cout << p[min(ans1-p.begin(),ans2-p.begin())] << endl;
    
    }

    return 0;
}