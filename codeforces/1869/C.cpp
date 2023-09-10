#include <bits/stdc++.h>
#define ll long long
#define sz(x) (int)(x.size())
using namespace std;

void solve() {
	int n, m;
	cin >> n >> m;
	int ans = min(n+1, m);
	if (m == 1) ans = 0;
	if (n == 1 && m >= 2) ans = 2;
	cout << ans << "\n";
	// int g[n][m];
	for (int i = 0; i < min(m-1, n); ++i) {
		for (int j = 0; j < m; ++j) {
			// g[i][j] = (i+1+j) % m;
			cout << ((i+1+j) % m) << " ";
		}
		cout << "\n";
	}
	for (int i = min(m-1, n); i < n; ++i) {
		for (int j = 0; j < m; ++j) {
			// g[i][j] = (j+1) % m;
			cout << ((j+1) % m) << " ";
		}
		cout << "\n";
	}
	// for (int i = 0; i < n; ++i) {
	// 	for (int j = 0; j < m; ++j) cout << g[i][j] << " ";
	// 	cout << "\n";
	// }
	// cout << "\n";
	// for (int i = 0; i < m; ++i) {
	// 	for (int j = 0; j < n; ++j) {

	// 	}
	// }
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
