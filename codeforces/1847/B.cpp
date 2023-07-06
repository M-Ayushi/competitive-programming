#include <bits/stdc++.h>
#define ll long long
#define sz(x) (int)(x.size())
using namespace std;

void solve() {
	int n, ans = 0;
	ll ba, c = -1;
	cin >> n >> ba;
	ll a[n];
	a[0] = ba;
	for (int i = 1; i < n; ++i) {
		cin >> a[i];
		ba = ba & a[i];
	}
	//cout << ba << " ";
	for (int i = 0; i < n; ++i) {
		if (c == -1) c = a[i];
		c = c & a[i];
		if (c == ba) {
			++ans;
			c = -1;
		}
	}

	if (ba == 0) cout << ans << "\n";
	else cout << "1\n";
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