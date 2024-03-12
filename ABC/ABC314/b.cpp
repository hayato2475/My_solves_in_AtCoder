#include <atcoder/all>
#include <bits/stdc++.h>
typedef long long ll;
using namespace std;
#define rep(i,a,n) for (int i = a; i < (n); i++)
template<typename T> inline bool chmax(T& a, T b) { return ((a < b) ? (a = b, true) : (false)); }
template<typename T> inline bool chmin(T& a, T b) { return ((a > b) ? (a = b, true) : (false)); }
const int INF = 1<<29;
int main() {
    int n,x;
    cin >> n;
    vector<int> c(n);
    vector<int> b;
    vector<vector<int>> pay(n);
    rep(i,0,n){
        cin >> c[i];
        rep(j,0,c[i]){
            int a;
            cin >> a;
            pay[i].push_back(a);
        }
    }
    cin >> x;
    int mini=INF;
    rep(i,0,n){
        if(find(pay[i].begin(),pay[i].end(),x) != pay[i].end()){
            chmin(mini,c[i]);
        }
    }
    rep(i,0,n){
        if(find(pay[i].begin(),pay[i].end(),x) != pay[i].end() && c[i] == mini){
            b.push_back(i+1);
        }
    }
    cout << b.size() << endl;
    for(auto x : b) cout << x << " ";
    cout << endl;
    return 0;
}