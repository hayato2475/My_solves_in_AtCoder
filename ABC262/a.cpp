#include <atcoder/all>
#include <bits/stdc++.h>
typedef long long ll;
using namespace std;
#define rep(i,a,n) for (int i = a; i < (n); i++)
template<typename T> inline bool chmax(T& a, T b) { return ((a < b) ? (a = b, true) : (false)); }
template<typename T> inline bool chmin(T& a, T b) { return ((a > b) ? (a = b, true) : (false)); }
const int INF = 1<<29;
int main() {
    int y;
    cin >> y;
    if(y%4==2) {
        cout << y << endl;
        return 0;
    }
    else{
        while(y%4!=2)y++;
    }
    cout << y << endl;
    return 0;
}