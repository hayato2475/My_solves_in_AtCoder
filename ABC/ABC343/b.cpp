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
    vector<vector<int>> a(n,vector<int>(n));
    rep(i,0,n){
        rep(j,0,n){
            cin >> a[i][j];
        }
    }
    rep(i,0,n){rep(j,0,n){
        if(a[i][j] == 1) cout << j+1 << " ";
    }cout << endl;}
    return 0;
}