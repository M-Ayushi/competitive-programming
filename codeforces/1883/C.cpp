#include <bits/stdc++.h>
#define ll long long
#define sz(x) (int)(x.size())
using namespace std;

void solve() {
	int n, k, md = 0, e = 0, a;
	cin >> n >> k;
	for (int i = 0; i < n; ++i) {
		cin >> a;
		if (a % k == 0) md = k;
		md = max(md, a%k);
		if (a % 2 == 0) ++e;
	}
	int ans = k-md;
	if (k == 4) {
		if (e >= 2) ans = 0;
		else if (e == 1) {
			if (n > 1) ans = min(ans, 1);
			else ans = min(ans, 2);
		}
		else {
			if (n > 1) ans = min(ans, 2);
			else ans = min(ans, 3);
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
