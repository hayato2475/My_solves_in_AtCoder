#include <atcoder/all>
#include <bits/stdc++.h>
typedef long long ll;
using namespace std;
#define rep(i,a,n) for (int i = a; i < (n); i++)
template<typename T> inline bool chmax(T& a, T b) { return ((a < b) ? (a = b, true) : (false)); }
template<typename T> inline bool chmin(T& a, T b) { return ((a > b) ? (a = b, true) : (false)); }
const int INF = 1<<29;
int main() {
    int a,b;
    cin >> a >> b;
    rep(i,1,1001){
        if(8*i/100 == a && i/10 == b){
            cout << i << endl;
            return 0;
        }
    }
    cout << -1 << endl;
    return 0;
}