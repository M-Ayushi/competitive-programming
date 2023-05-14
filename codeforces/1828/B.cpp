#include <bits/stdc++.h>
#define ll long long
#define sz(x) (int)(x.size())
using namespace std;

void solve() {
	int n;
	cin >> n;
	int a[n], ans = -1;
	for (int i = 0; i < n; ++i) {
		cin >> a[i];
		// cout << abs(a[i]-(i+1)) << " ";
		if (ans == -1) ans = abs(a[i]-(i+1));
		else ans = gcd(ans, abs(a[i]-(i+1)));
	}
	// cout << "\n";
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