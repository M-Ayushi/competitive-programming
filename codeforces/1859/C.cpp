#include <bits/stdc++.h>
#define ll long long
#define sz(x) (int)(x.size())
using namespace std;

void solve() {
	int n;
	cin >> n;
	ll ans = 0, c, mx, cur;

	for (ll i = 0; i < n; ++i) {
		cur = 0, mx = 0;
		for (ll j = 1; j <= i; ++j) {
			// cout << j << " ";
			cur += j*j;
			mx = max(mx, j*j);
		}
		c = i+1;
		for (ll j = n; j > i; --j) {
			// cout << c << " ";
			cur += c * j;
			mx = max(mx, c*j);
			++c;
		}
		// cout << "\n";
		ans = max(ans, cur-mx);
	}
	// ll f = min((n+1)/2, 4);
	// for (ll i = 1; i <= n-f; ++i) {
	// 	ans += i*i;
	// 	mx = max(mx, i*i);
	// 	// cout << i << " ";
	// } 
	// c = n-f + 1;
	// for (ll j = n; j > n-f; --j) {
	// 	// cout << j << " ";
	// 	ans += j * c;
	// 	mx = max(mx, j*c);
	// 	++c;
	// }
	// // cout << "\n";
	// ans -= mx;
	cout << ans << "\n";


	// vector<int> v;
	// for (int i = 1; i <= n; ++i) v.push_back(i);

	// int s, mx, ans = 0;
	// do {
	// 	s = 0, mx = 0;
	// 	for (int i = 0; i < n; ++i) {
	// 		s += v[i] * (i+1);
	// 		mx = max(mx, v[i]*(i+1));
	// 		// cout << v[i] << " ";
	// 	}
	// 	// cout << "\n";
	// 	// cout << (s-mx) << "\n";
	// 	ans = max(ans, s-mx);
	// 	// cout << "\n";
	// 	if (s-mx == 406) {
	// 		for (auto x : v) cout << x << " ";
	// 		cout << "\n\n";
	// 	}
	// } while(next_permutation(v.begin(), v.end()));

	// cout << ans << "\n";
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
