#include <bits/stdc++.h>
#define ll long long
#define sz(x) (int)(x.size())
using namespace std;

void solve() {
	int n;
	cin >> n;
	int a[n];
	cin >> a[0];
	int ans = a[0];
	bool f = 0, bf = 0, wf = 0;
	// cout << ans << "\n";
	for (int i = 1; i < n; ++i) {
		// --f;
		cin >> a[i];
		ans += a[i];
		if ((a[i-1] + a[i]) == -2) {
			f = 1;
		}
		if ((a[i-1] + a[i]) == 0) {
			bf = 1;
		}
		if ((a[i-1] + a[i]) == 2) {
			wf = 1;
		}
	}

	if (f) ans += 4;
	else if (bf) ans += 0;
	else if (wf) ans -= 4;
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