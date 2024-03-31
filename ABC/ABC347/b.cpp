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
    set<string> st;
    int n = s.size();
    rep(i,0,n){
        string t;
        t.push_back(s[i]);
        st.insert(t);
    }
    rep(i,0,n-1){
        string t;
        t.push_back(s[i]);
        rep(j,i+1,n){
            t.push_back(s[j]);
            st.insert(t);
        }
    }
    cout << st.size() << endl;
    return 0;
}