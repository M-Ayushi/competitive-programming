#include <bits/stdc++.h>
#define ll long long
#define sz(x) (int)(x.size())
using namespace std;

void solve() {
	int n, m;
	cin >> n >> m;
	int a[n], b[n], c[n+1];
	c[0] = 0;
	for (int i = 0; i < n; ++i) {
		cin >> a[i];
		b[i] = a[i];
	}
	sort(b, b+n);
	int k = n;
	for (int i = 0; i < n; ++i) {
		c[i+1] = c[i]+b[i];
		if (k == n && c[i+1] > m) {
			k = i;
		}
	}
	// for (auto x : c) cout << x << " ";
	// cout << "\n";
	// cout << k << " ";
	int ans = (n-k)+1;
	if (k < n) {
		if (k > 0) {
			if (a[k] <= b[k-1] || a[k]+c[k-1] <= m) {
				--ans;
			}
		}	
	}
	// else {
	// 	if (a[k] <= b[k-1])
	// }
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