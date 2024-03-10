#include <atcoder/all>
#include <bits/stdc++.h>
typedef long long ll;
using namespace std;
#define rep(i,a,n) for (int i = a; i < (n); i++)
template<typename T> inline bool chmax(T& a, T b) { return ((a < b) ? (a = b, true) : (false)); }
template<typename T> inline bool chmin(T& a, T b) { return ((a > b) ? (a = b, true) : (false)); }
const int INF = 1<<29;
int main() {
    string s;
    cin >> s;
    int cnt = 0;
    rep(i,0,s.size()){
        if(s[i] == '|') {
            cnt++;
            continue;
        }
        if(cnt == 0 || cnt == 2) cout << s[i];
    }
    cout << endl;
    return 0;
}