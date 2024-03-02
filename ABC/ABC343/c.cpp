#include <atcoder/all>
#include <bits/stdc++.h>
typedef long long ll;
using namespace std;
#define rep(i,a,n) for (int i = a; i < (n); i++)
template<typename T> inline bool chmax(T& a, T b) { return ((a < b) ? (a = b, true) : (false)); }
template<typename T> inline bool chmin(T& a, T b) { return ((a > b) ? (a = b, true) : (false)); }
const int INF = 1<<29;
int main() {
    ll n,ans,i=1;
    string fans;
    cin >> n;
    while(i*i*i<=n){
        ans = i*i*i;
        string kari = to_string(ans);
        string rev=kari;
        reverse(rev.begin(),rev.end());
        if(kari == rev) fans = kari;
        i++;
    }
    cout << fans << endl;
    return 0;
}