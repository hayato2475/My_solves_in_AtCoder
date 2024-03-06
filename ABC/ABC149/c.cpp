#include <atcoder/all>
#include <bits/stdc++.h>
typedef long long ll;
using namespace std;
#define rep(i,a,n) for (int i = a; i < (n); i++)
template<typename T> inline bool chmax(T& a, T b) { return ((a < b) ? (a = b, true) : (false)); }
template<typename T> inline bool chmin(T& a, T b) { return ((a > b) ? (a = b, true) : (false)); }
const int INF = 1<<29;

// 素数判定
bool isprime(ll N){
    if (N < 2) return false;
    for (ll i=2; i*i<=N; ++i) {
        if (N%i == 0) return false;
    }
    return true;
}

int main() {
    int x;
    cin >> x;
    while(!isprime(x)) x++;
    cout << x << endl;
    return 0;
}