#include <bits/stdc++.h>
#define ll long long
#define sz(x) (int)(x.size())
using namespace std;

void solve() {
	ll n, c, t;
	cin >> n;
	for (ll i = 2; (1 + i + i*i) <= n; ++i) {
		if (n % i == 1) {
			c = i*i;
			t = 1 + i + c;
			while (t < n) {
				c = c * i;
				t += c;
			}
			if (t == n) {
				cout << "YES\n";
				return;
			}
		}
	}
	cout << "NO\n";
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
