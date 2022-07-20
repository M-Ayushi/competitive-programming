#include <bits/stdc++.h>
#define ll long long
#define sz(x) (int)(x).size()
using namespace std;

// int bs (ll l, ll r, ll k, ll n, ll t) {
int bs (ll l, ll r, ll t, ll k, ll n) {
	// cout << l << " " << r << "\n";
	ll m = (l+r)/2;
	ll x = (m*(m+1))/2;

	// cout << x << "\n";

	if (t-x < n) {
		if (l == m) return (k-m)+1;
		else return bs(l, m, t, k, n);
	}
	else {
		if (m+1 == r) return (k-r)+1;
		else return bs(m+1, r, t, k, n);
	}
	
	// if (n%m) ++x;

}

void solve() {
	ll n, k, ans = -1;
	cin >> n >> k;
	--k;
	--n;
	// cout << n << " " << k << "\n";
	ll t = (k*(k+1))/2;
	// cout << t << "\n";

	if (n == 0) ans = 0;
	else if (n <= t) {
		ans = bs(1, k, t, k, n);
	}

	// 	ans = 0;
	// 	for (ll i = k; n && i > 0; --i) {
	// 		if (n >= i) {
	// 			// cout << i << "\n";
	// 			n -= i;
	// 			++ans;
	// 		}
	// 		else i = n+1;
	// 	}
	// }
	
	cout << ans << "\n";

	return;
}
 
int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	solve();
	
    return 0;
}
