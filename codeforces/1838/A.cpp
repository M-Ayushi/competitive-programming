#include <bits/stdc++.h>
#define ll long long
#define sz(x) (int)(x.size())
using namespace std;

void solve() {
	int n, mn = 1e9, mx = -1e9;
	cin >> n;
	int a[n];
	for (int i = 0; i < n; ++i) {
		cin >> a[i];
		mn = min(mn, a[i]);
		mx = max(mx, a[i]);
	}

	if (mn < 0) {
		cout << mn << "\n";
	}
	else cout << mx << "\n";
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