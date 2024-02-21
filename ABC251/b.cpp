#include <atcoder/all>
#include <bits/stdc++.h>
typedef long long ll;
using namespace std;
#define rep(i,a,n) for (int i = a; i < (n); i++)
template<typename T> inline bool chmax(T& a, T b) { return ((a < b) ? (a = b, true) : (false)); }
template<typename T> inline bool chmin(T& a, T b) { return ((a > b) ? (a = b, true) : (false)); }
const int INF = 1<<29;
int main() {
    int n,w;
    cin >> n >> w;
    vector<ll> a(n);
    set<ll> b; //重複を防ぐためsetを使用

    rep(i,0,n) cin >> a[i];
    rep(i,0,n) if(a[i]<=w) b.insert(a[i]); //b.insert(a[i])で要素を追加
    rep(i,0,n-1){
        rep(j,i+1,n){
            if(a[i]+a[j]<=w) b.insert(a[i]+a[j]);
        }
    }
    rep(i,0,n-2){
        rep(j,i+1,n-1){
            rep(k,j+1,n){
                if(a[i]+a[j]+a[k]<=w) b.insert(a[i]+a[j]+a[k]);
            }    
        }
    }

    cout << b.size() << endl; //b.size()で大きさを取得

    return 0;
}