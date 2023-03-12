#include <bits/stdc++.h>
#define ll long long
#define sz(x) (int)(x.size())
using namespace std;

void solve() {
	int n, k, d, w;
	cin >> n >> k >> d >> w;
	int a[n];
	for (int i = 0; i < n; ++i) {
		cin >> a[i];
	}

	int r = 0, u = -1, ans = 0;
	for (int i = 0; i < n; ++i) {
		if (r > 0 && u >= a[i]) {
			--r;
		}
		else {
			++ans;
			r = k-1;
			u = a[i]+w+d;
		}
	}
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