#include <bits/stdc++.h>
#define ll long long
#define sz(x) (int)(x.size())
using namespace std;

void solve() {
	int n, m, o = 0, x = 0, y = 0;
	cin >> n >> m;
	int a[n], b[m];
	for (int i = 0; i < n; ++i) {
		cin >> a[i];
	}
	for (int i = 0; i < m; ++i) {
		cin >> b[i];
		o = o | b[i];
	}

	for (int i = 0; i < n; ++i) {
		x = x ^ a[i];
		y = y ^ (a[i]|o);
	}
	cout << min(x, y) << " " << max(x, y) << "\n";
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
