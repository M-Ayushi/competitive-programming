#include <bits/stdc++.h>
#define ll long long
#define sz(x) (int)(x).size()
using namespace std;

void solve() {
	ll n, m;
	cin >> n >> m;
	ll f = 1, t = 1;
	int pf = 0, pt = 0;
	// t = t << 1;
	// cout << t;
	while (t <= n) {
		if (n % t == 0) ++pt;
		if (n % f == 0) ++pf;
		t = t << 1;
		f = f * 5;
	}
	int sf = pf, st = pt;
	// cout << pt << " " << pf << "\n";

	ll c = 1;

	while (pf < pt && (c*5) <= m) {
		c = c * 5;
		++pf;
	}

	while (pt < pf && (c*2) <= m) {
		c = c * 2;
		++pt;
	}

	while ((c*10) <= m) {
		c = c * 10;
		++pf;
		++pt;
	}

	c = (m/c)*c;
	// while ((c*2) <= m) {
	// 	if (pf <= pt && (c*5) <= m) {
	// 		c = c * 5;
	// 		++pf;

	// 		// if (c > m) {
	// 		// 	c = c / 5;
	// 		// 	--pf;
	// 		// 	break;
	// 		// }
	// 	}
	// 	else {
	// 		c = c << 1;
	// 		++pt;

	// 		// if (c > m) {
	// 		// 	c = c >> 1;
	// 		// 	--pt;
	// 		// 	break;
	// 		// }
	// 	}
	// }
	// cout << c << "\n";
	// cout << st << " " << sf << "\n";
	// cout << pt << " " << pf << "\n";

	ll ans = n*m;
	if (min(pt, pf) > min(st, sf)) {
		ans = n * c;
	}
	// ll f = m - (m%5);
	// cout << n << " " << f << "\n";
	// 
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