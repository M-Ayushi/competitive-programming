#include <bits/stdc++.h>
#define ll long long
#define sz(x) (int)(x.size())
using namespace std;

void solve() {
	ll n, x, ans = 0;
	cin >> n >> x;
	for (ll i = 1; i < x; ++i) {
		for (ll j = i; j < x; ++j) {
			if (i + j < x && i*j + i + j <= n) {
				for (ll k = j; k < x; ++k) {
					if (i+j+k <= x && i*j + i*k + j*k <= n) {
						if (i == k) ++ans;
						else if (i == j || j == k) ans += 3;
						else ans += 6;
					}
					else break;
				}
			}
			else break;
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
