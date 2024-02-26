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
    string s;
    cin >> n >> s >> q;
    string from,to;
    from = to = "abcdefghijklmnopqrstuvwxyz";
    rep(i,0,q) {
        char c,d;
        cin >> c >> d;
        rep(j,0,to.size()){
            if(to[j] == c)
                to[j] = d;
        }
    }
    for(char x : s){
        rep(j,0,26){
            if(x == from[j]) cout << to[j];
        }
    }

    cout << endl;

    return 0;
}