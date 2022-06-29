#include <bits/stdc++.h>
#define ll long long
#define sz(x) (int)(x).size()
using namespace std;

void solve() {
	int n, k;
	cin >> n >> k;
	int a;
	int b[31];
	for (int i = 0; i < 31; ++i) b[i] = 0;
	for (int i = 0; i < n; ++i) {
		cin >> a;

		for (int j = 0; j < 31; ++j) {
			// cout << (1 >> 31) << " ";
			b[j] += (a%2);
			a = a >> 1;
			// cout << b[j] << " ";
		}
		// cout << "\n";
	}

	// for (auto x : b) cout << x << " ";
	// cout << "\n";

	int ans = 0; //, o = 1;
	for (int i = 30; i >= 0; --i) {
		if (n-b[i] <= k) {
			// cout << i << " ";
			k -= (n-b[i]);
			ans += (1 << i);
		}
	}
	// cout << "\n";
	cout << ans << "\n";
	
	// ll o = 1;
	// for (ll j = 31; j >= 0; --j) {
	// 	cout << (o << j) << " ";
	// }
	// cout << "\n";
	return;
}
 
int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int t;
	cin >> t;
	while (t--) {
		solve();
	}
	
    return 0;
}
