#include <atcoder/all>
#include <bits/stdc++.h>
typedef long long ll;
using namespace std;
#define rep(i,a,n) for (int i = a; i < (n); i++)
template<typename T> inline bool chmax(T& a, T b) { return ((a < b) ? (a = b, true) : (false)); }
template<typename T> inline bool chmin(T& a, T b) { return ((a > b) ? (a = b, true) : (false)); }
const int INF = 1<<29;
int main() {
    ll n,a,b;
    cin >> n >> a >> b;
    ll week_number = a+b;
    n++;
    vector<ll> d(n);
    rep(i,1,n){
        cin >> d[i];
        if(d[i]>week_number) d[i]%=week_number;
    }
    rep(i,1,n) d.push_back(d[i]+week_number);
    sort(d.begin(),d.end());
    rep(i,1,d.size()){
        if(d[i+1]-d[i] >= b+1){
            cout << "Yes\n";
            return 0;
        }
    }
    cout << "No\n";
    return 0;
}