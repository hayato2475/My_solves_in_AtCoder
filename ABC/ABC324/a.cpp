#include <atcoder/all>
#include <bits/stdc++.h>
typedef long long ll;
using namespace std;
#define rep(i,a,n) for (int i = a; i < (n); i++)
template<typename T> inline bool chmax(T& a, T b) { return ((a < b) ? (a = b, true) : (false)); }
template<typename T> inline bool chmin(T& a, T b) { return ((a > b) ? (a = b, true) : (false)); }
const int INF = 1<<29;
int main() {
    int n;
    cin >> n;
    vector<int> a(n);
    cin >> a[0];
    rep(i,1,n){
         cin >> a[i];
         if(a[i] != a[i-1]){
            cout << "No\n";
            return 0;
         }
    } 
    cout << "Yes\n";  
    return 0;
}