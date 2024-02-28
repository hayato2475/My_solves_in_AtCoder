#include <atcoder/all>
#include <bits/stdc++.h>
typedef long long ll;
using namespace std;
#define rep(i,a,n) for (int i = a; i < (n); i++)
template<typename T> inline bool chmax(T& a, T b) { return ((a < b) ? (a = b, true) : (false)); }
template<typename T> inline bool chmin(T& a, T b) { return ((a > b) ? (a = b, true) : (false)); }
const int INF = 1<<29;
int main() {
    int n,t=0,a=0;
    string s;
    bool ans;

    cin >> n >> s;
    rep(i,0,n){
        if(s[i] == 'T') t++;
        if(s[i] == 'A') a++;
        if(t>a) ans=true;
        else if(t<a) ans=false; 
    }
    if(t>a) cout << "T\n";
    else if(t<a) cout << "A\n";
    else{
        if(ans) cout << "T\n";
        else cout << "A\n";
    }

    return 0;
}