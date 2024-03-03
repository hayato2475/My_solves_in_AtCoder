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
    s.erase(unique(s.begin(),s.end()),s.end());
    if(s == "A" || s == "AB" || s == "AC" || s == "B" || s == "BC" || s == "C" || s == "ABC") cout << "Yes\n";
    else cout << "No\n";
    
    return 0;
}