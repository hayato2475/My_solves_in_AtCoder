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
    cin >> n >> x;
    vector<int> a(n-1),b(n-1);
    rep(i,0,n-1) cin >> a[i];
    rep(i,0,101){
        b=a;
        b.push_back(i);
        sort(b.begin(),b.end());
        if(accumulate(b.begin()+1,b.end()-1,0)>=x){
            cout << i << endl;
            return 0;
        }
    }
    cout << -1 << endl;
    return 0;
}