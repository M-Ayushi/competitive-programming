#include <bits/stdc++.h>
#define ll long long
#define sz(x) (int)(x.size())
using namespace std;

void solve() {
	ll n, ans = 0, c, o = 0;
	cin >> n;
	ll a[n], x;
	for (int i = 0; i < n; ++i) {
		cin >> a[i];
	}
	ll m = a[0];
	for (int i = 1; i < n; ++i) {
		if (a[i] >= a[i-1]) {
			c = 0;
			if (a[i-1] <= 1) {
				if (m > a[i-1]) {	
					cout << "-1\n";
					return;
				}
			}
			else {
				while (a[i-1]*a[i-1] <= a[i]) {
					a[i-1] *= a[i-1];
					++c;
				}
			}			
			o -= min(o, c);
		}
		else {
			if (a[i] <= 1) {
				cout << "-1\n";
				return;
			}
			x = a[i];
			c = 0;
			while (x < a[i-1]) {
				x *= x;
				++c;
			}
			o += c;
		}
		m = max(m, a[i]);
		// cout << o << " ";
		ans += o;
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
