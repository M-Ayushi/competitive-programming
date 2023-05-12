#include <bits/stdc++.h>
#define ll long long
#define sz(x) (int)(x.size())
using namespace std;

void solve() {
	vector<int> c(26, 0);
	string s;
	cin >> s;
	int n = sz(s);
	for (int i = 0; i < n/2; ++i) {
		c[s[i]-'a']++;
	}
	int x = 0;
	for (int i = 0; i < 26; ++i) {
		if (c[i]) ++x;
	}
	if (x >= 2) cout << "YES\n";
	else cout << "NO\n";
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