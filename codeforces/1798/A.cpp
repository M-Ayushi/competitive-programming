#include <bits/stdc++.h>
#define ll long long
#define sz(x) (int)(x.size())
using namespace std;

void solve() {
	int n;
	cin >> n;
	int a[n];
	for (int i = 0; i < n; ++i) {
		cin >> a[i];
	}
	int b[n];
	for (int i = 0; i < n; ++i) {
		cin >> b[i];
	}

	int mx = 0, mxp = 0;
	for (int i = 0; i < n-1; ++i) {
		mx = max(mx, max(a[i], b[i]));
		mxp = max(mxp, min(a[i], b[i]));

		// if (max(a[i], b[i]) > mx) {
		// 	mx = max(a[i], b[i]);
		// 	mxp = min(a[i], b[i]);
		// }
		// if (max(a[i], b[i]) == mx) {
		// 	mxp = max(mxp, min(a[i], b[i]));
		// }
	}

	// cout << mx << " " << mxp << "\n";

	if (max(a[n-1], b[n-1]) >= mx && min(a[n-1], b[n-1]) >= mxp) {
		cout << "YES\n";
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