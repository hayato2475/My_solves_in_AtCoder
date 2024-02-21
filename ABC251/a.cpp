#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); i++)

int main(){
	string s,ans;
	int i = 0;
	cin >> s;
	int l = s.size();
	while(ans.size()!=6) {
		ans.push_back(s[i]);
		i++;
		if (i == l)
			i = 0;
	}
	cout << ans << endl;
}