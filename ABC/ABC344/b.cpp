#include <atcoder/all>
#include <bits/stdc++.h>
typedef long long ll;
using namespace std;
#define rep(i,a,n) for (int i = a; i < (n); i++)
template<typename T> inline bool chmax(T& a, T b) { return ((a < b) ? (a = b, true) : (false)); }
template<typename T> inline bool chmin(T& a, T b) { return ((a > b) ? (a = b, true) : (false)); }
const int INF = 1<<29;
int main() {
    int n=0;
    vector<int> a(101);
    rep(i,0,100){
        cin >> a[i];
        if(a[i] == 0){
            n=i;
            break;
        }
    }
    for(int i=n;i>=0;i--) cout << a[i] << endl;
    
    return 0;
}