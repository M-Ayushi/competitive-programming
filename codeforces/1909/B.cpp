#include <bits/stdc++.h>
#define ll long long
#define sz(x) (int)(x.size())
using namespace std;

void solve() {
	int n;
	ll x, y;
	cin >> n;
	ll a[n];
	bool b;
	for (int i = 0; i < n; ++i) {
		cin >> a[i];
	}
	for (ll i = 2; i <= (1e18); i *= 2) {
		x = -1, y = -1;
		b = 1;
		for (int j = 0; j < n; ++j) {
			if ((a[j] % i != x) && (a[j] % i != y)) {
				if (x == -1) x = (a[j] % i);
				else if (y == -1) y = (a[j] % i);
				else {
					b = 0;
					break;
				}
			}
		} 
		if (b && x > -1 && y > -1) {
			cout << i << "\n";
			return;
		}
	}
	cout << "-1\n";
	// if (o == n) {
	// 	if (a[n-1] == 1) {}
	// }
	// else cout << "2\n";
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
