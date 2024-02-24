#include <atcoder/all>
#include <bits/stdc++.h>
typedef long long ll;
using namespace std;
#define rep(i,a,n) for (int i = a; i < (n); i++)
template<typename T> inline bool chmax(T& a, T b) { return ((a < b) ? (a = b, true) : (false)); }
template<typename T> inline bool chmin(T& a, T b) { return ((a > b) ? (a = b, true) : (false)); }
const int INF = 1<<29;
int main() {
    int n,num=1,cnt=0;
    cin >> n;
    vector<int> a(n);
    rep(i,0,n) {
        cin >> a[i];
        if(a[i] == num) num++,cnt++;
    }
    if(cnt) cout << a.size()-cnt << endl;
    else cout << -1 << endl;
}