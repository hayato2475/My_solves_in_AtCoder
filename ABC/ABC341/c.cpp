#include <atcoder/all>
#include <bits/stdc++.h>
typedef long long ll;
using namespace std;
#define rep(i,a,n) for (int i = a; i < (n); i++)
template<typename T> inline bool chmax(T& a, T b) { return ((a < b) ? (a = b, true) : (false)); }
template<typename T> inline bool chmin(T& a, T b) { return ((a > b) ? (a = b, true) : (false)); }
const int INF = 1<<29;
int main() {
    int h,w,n;
    cin >> h >> w >> n;
    string t;
    cin >> t;
    vector<string> s(h);
    rep(i,0,h) cin >> s[i];
    int cnt=0;
    rep(i,0,h){
        rep(j,0,w){
            int rnd=0;
            if(s[i][j] == '.'){
                int y=i,x=j;
                 rep(k,0,n){
                    if(t[k] == 'U'){
                        y--;
                    }
                    else if(t[k] == 'D'){
                        y++;
                    }
                    else if(t[k] == 'R'){
                        x++;
                    }
                    else if(t[k] == 'L'){
                        x--;
                    }
                    if(s[y][x] == '#')
                        break;
                    else rnd++;
                 }
                 if(rnd == n) cnt++;
            }
        }
    }
    cout << cnt << endl;
    return 0;
}