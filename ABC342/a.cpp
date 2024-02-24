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
    string t=s;
    sort(s.begin(),s.end());
    char ans;
    if(s[0] == s[1]) ans=s[s.size()-1];
    else ans=s[0];
    cout << t.find(ans)+1 << endl;
    return 0;
}