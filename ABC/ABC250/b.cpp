#include <atcoder/all>
#include <bits/stdc++.h>
typedef long long ll;
using namespace std;
#define rep(i,a,n) for (int i = a; i < (n); i++)
template<typename T> inline bool chmax(T& a, T b) { return ((a < b) ? (a = b, true) : (false)); }
template<typename T> inline bool chmin(T& a, T b) { return ((a > b) ? (a = b, true) : (false)); }
const int INF = 1<<29;
int main() {
    int n,a,b;
    cin >> n >> a >> b;
    string x1,x2;
    rep(i,0,n){
        rep(j,0,b) {
            if(i%2==0)x1.push_back('.'),x2.push_back('#');
            else x1.push_back('#'),x2.push_back('.');
        }
    }
    rep(i,0,n){
        rep(j,0,a){
            if(i%2==0) cout << x1 << endl;
            else cout << x2 << endl;
        }
    }
}