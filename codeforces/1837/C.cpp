#include <bits/stdc++.h>
#define ll long long
#define sz(x) (int)(x.size())
using namespace std;

void solve() {
	string s;
	cin >> s;
	int n = sz(s);
	vector<int>  ans;
	int p = 1;
	// char p = '1';
	// string ans = "";
	for (int i = n-1; i >= 0; --i) {
		if (s[i] == '?') ans.push_back(p);
		else if (s[i] == '1') {
			ans.push_back(1);
			p = 1;
		}
		else {
			ans.push_back(0);
			p = 0;
		}
	}
	// cout << ans << "\n";
	for (int i = n-1; i >= 0; --i) cout << ans[i];
	cout << "\n";
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