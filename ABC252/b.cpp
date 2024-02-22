#include <atcoder/all>
#include <bits/stdc++.h>
typedef long long ll;
using namespace std;
#define rep(i,a,n) for (int i = a; i < (n); i++)
template<typename T> inline bool chmax(T& a, T b) { return ((a < b) ? (a = b, true) : (false)); }
template<typename T> inline bool chmin(T& a, T b) { return ((a > b) ? (a = b, true) : (false)); }
const int INF = 1<<29;
int main() {
    int n,k;
    cin >> n >> k;
    vector<pair<int,int>> a(n);
    vector<int> b(k);
    rep(i,0,n) {
        cin >> a[i].first;
        a[i].second = i+1;
    }
    sort(a.rbegin(),a.rend());
    rep(i,0,k) cin >> b[i];

    vector<int> dlike;

    int max = a[0].first;
    rep(i,0,n){
        if(a[i].first == max){
            dlike.push_back(a[i].second);
        }
    }
    rep(i,0,k){
        rep(j,0,dlike.size()){
            if(b[i] == dlike[j]){
                cout << "Yes\n";
                return 0;
            }
        }
    }
    cout << "No\n";
    
    return 0;
}