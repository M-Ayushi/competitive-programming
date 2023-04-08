#include <bits/stdc++.h>
#define ll long long
#define sz(x) (int)(x.size())
using namespace std;

void solve() {
	int n, k, d = 0;
	cin >> n >> k;
	int a[n][n];
	for (int i = 0; i < n; ++i) {
		for (int j = 0; j < n; ++j) cin >> a[i][j];
	}

	for (int i = 0; i < n; ++i) {
		for (int j = 0; j < n; ++j) {
			if (a[i][j] != a[n-i-1][n-j-1]) ++d;
		}
	}
	d = d/2;
	if (d <= k) {
		if ((k - d) % 2) {
			if (n % 2) cout << "YES\n";
			else cout << "NO\n";
		}
		else cout << "YES\n";
	}
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