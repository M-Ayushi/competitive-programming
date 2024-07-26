#include <bits/stdc++.h>
#define ll long long
#define sz(x) (int)(x.size())
using namespace std;

void solve() {
	int n, q, l, r;
	cin >> n >> q;

	int lca[n+1][26], lcb[n+1][26];
	for (int i = 0; i < 26; ++i) {
		lca[0][i] = 0;
		lcb[0][i] = 0;
	}
	
	string a, b;
	cin >> a >> b;
	for (int i = 0; i < n; ++i) {
		for (int j = 0; j < 26; ++j) {
			lca[i+1][j] = lca[i][j];
			lcb[i+1][j] = lcb[i][j];
		}
		lca[i+1][a[i]-'a']++;
		lcb[i+1][b[i]-'a']++;
	}

	// for (int i = 0; i < 26; ++i) {
	// 	for (int j = 0; j <= n; ++j) {
	// 		cout << lcb[j][i] << " ";
	// 	}
	// 	cout << "\n";
	// } 

	int ans;
	while (q--) {
		cin >> l >> r;
		ans = 0;
		for (int i = 0; i < 26; ++i) {
			// cout << "indexes: " << r << " " << l-1 << "\n";
			// cout << (lca[r][i]-lca[l-1][i]) << " " << (lcb[r][i]-lcb[l-1][i]) << "\n";
			ans += abs((lca[r][i]-lca[l-1][i]) - (lcb[r][i]-lcb[l-1][i]));
		}
		cout << (ans/2) << "\n";
	}
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
