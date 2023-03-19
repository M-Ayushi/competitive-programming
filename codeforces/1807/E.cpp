#include <bits/stdc++.h>
#define ll long long
#define sz(x) (int)(x.size())
using namespace std;

void solve() {
	int n, w;
	cin >> n;
	int a[n], b[n+1];
	b[0] = 0;
	for (int i = 0; i < n; ++i) {
		cin >> a[i];
		b[i+1] = b[i]+a[i];
	}
	int l = 1, r = n, m;

	while (l < r) {
		// cout << l << " " << r << "\n";
		m = (l + r)/2;
		cout << "? " << (m-l+1) << " ";
		for (int i = l; i <= m; ++i) {
			cout << i << " ";
		}
		cout << "\n";

		cin >> w;
		if (w == b[m]-b[l-1]) {
			l = m+1;
		}
		else {
			r = m;
		}
	}
	cout << "! " << l << "\n";

	return;
}

int main() {
	// ios_base::sync_with_stdio(0);
	// cin.tie(0);
	int t;
	cin >> t;
	while (t--) solve();
	
	return 0;
}