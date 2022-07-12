#include <bits/stdc++.h>
#define ll long long
#define sz(x) (int)(x).size()
using namespace std;

void solve() {
	map<string, bool> li;

	int n, m;
	cin >> n;
	string s[n];
	for (int i = 0; i < n; ++i) {
		cin >> s[i];
		li[s[i]] = 1;
	}

	string ans = "";
	bool f;
	for (int i = 0; i < n; ++i) {
		f = 0, m = sz(s[i]);
		for (int j = 1; j <= m; ++j) {
			if (li[s[i].substr(0, j)] && li[s[i].substr(j, m-j)]) {
				f = 1;
				break;
			}
		} 
		if (f) ans.append("1");
		else ans.append("0");
	}
	cout << ans << "\n";
	return;
}
 
int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int t;
	cin >> t;
	while (t--) solve();
	
    return 0;
}
