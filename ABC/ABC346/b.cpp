#include <atcoder/all>
#include <bits/stdc++.h>
typedef long long ll;
using namespace std;
#define rep(i,a,n) for (int i = a; i < (n); i++)
template<typename T> inline bool chmax(T& a, T b) { return ((a < b) ? (a = b, true) : (false)); }
template<typename T> inline bool chmin(T& a, T b) { return ((a > b) ? (a = b, true) : (false)); }
const int INF = 1<<29;
int main() {
    int w,b;
    cin >> w >> b;
    string t,s = "wbwbwwbwbwbw";
    rep(i,0,20) t += s;
    int n = t.size();
    rep(i,0,n){ 
        rep(j,0,i+1){
            int cntw=0,cntb=0;
            rep(k,j,i+1){
                if(t[k] == 'w') cntw++;
                if(t[k] == 'b') cntb++;
            }
            if(cntw == w && cntb == b){cout << "Yes\n"; return 0;}
        }
    }
    cout << "No\n";
    return 0;
}