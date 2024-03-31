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
    vector<int> a(n),b;
    rep(i,0,n){
        cin >> a[i];
        if(a[i]%k==0) b.push_back(a[i]/k);
    }
    for(int x : b){
        cout << x << " ";
    }
    cout << endl;
    return 0;
}