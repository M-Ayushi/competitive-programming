#include <bits/stdc++.h>
#define ll long long
#define sz(x) (int)(x.size())
using namespace std;

void solve() {
	string s = "vika";
	int n, m, c = 0;
	cin >> n >> m;
	string a[n];
	for (int i = 0; i < n; ++i) {
		cin >> a[i];
	}

	for (int i = 0; i < m && c < 4; ++i) {
		for (int j = 0; j < n; ++j) {
			if (a[j][i] == s[c]) {
				++c;
				break;
			}
		} 
	}

	if (c == 4) cout << "YES\n";
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
