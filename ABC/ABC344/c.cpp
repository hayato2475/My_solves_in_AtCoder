#include <atcoder/all>
#include <bits/stdc++.h>
typedef long long ll;
using namespace std;
#define rep(i,a,n) for (int i = a; i < (n); i++)
template<typename T> inline bool chmax(T& a, T b) { return ((a < b) ? (a = b, true) : (false)); }
template<typename T> inline bool chmin(T& a, T b) { return ((a > b) ? (a = b, true) : (false)); }
const int INF = 1<<29;
int main() {
    int n,m,l,q;
    cin >> n;
    vector<int> a(n);
    rep(i,0,n) cin >> a[i];
    cin >> m;
    vector<int> b(m);
    rep(i,0,m) cin >> b[i];
    cin >> l;
    vector<int> c(l);
    rep(i,0,l) cin >> c[i];
    cin >> q;
    vector<int> x(q);
    rep(i,0,q) cin >> x[i];

    vector<ll> p;
    rep(i,0,n){
        rep(j,0,m){
            rep(k,0,l){
                p.push_back(a[i]+b[j]+c[k]);
            }
        }
    }

    sort(p.begin(),p.end());
    
    rep(i,0,q){
        bool ans = binary_search(p.begin(),p.end(),x[i]);
        if(!ans) cout << "No\n";
        else cout << "Yes\n";
    }
    
    return 0;
}