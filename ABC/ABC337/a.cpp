#include <atcoder/all>
#include <bits/stdc++.h>
typedef long long ll;
using namespace std;
#define rep(i,a,n) for (int i = a; i < (n); i++)
template<typename T> inline bool chmax(T& a, T b) { return ((a < b) ? (a = b, true) : (false)); }
template<typename T> inline bool chmin(T& a, T b) { return ((a > b) ? (a = b, true) : (false)); }
const int INF = 1<<29;
int main() {
    int n,a,b; a=0,b=0;
    cin >> n;
    rep(i,0,n){
        int x,y;
        cin >> x >> y;
        a+=x,b+=y;
    }
    if(a>b) cout << "Takahashi\n";
    else if(a<b) cout << "Aoki\n";
    else cout << "Draw\n";
    return 0;
}