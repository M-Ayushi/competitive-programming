#include <bits/stdc++.h>
#define ll long long
#define sz(x) (int)(x.size())
using namespace std;

int bs(int l, int r, ll k[], ll x) {
	if (l == r) return l;
	int m = (l+r)/2;
	if (k[m] <= x) {
		return bs(m+1, r, k, x);
	}
	else {
		return bs(l, m, k, x);
	}
}

void solve() {
	int n, m, y;
	cin >> n >> m;
	ll k[n];
	// ll k, mnk = 1e8+1, mxk = -1e8-1;
	// cout << mnk << " " << mxk << "\n";
	for (int i = 0; i < n; ++i) {
		cin >> k[i];
		// mnk = min(mnk, k);
		// mxk = max(mxk, k);
	}
	sort(k, k+n);
	// cout << mnk << " " << mxk << "\n";
	ll a, b, c, d, x;
	for (int i = 0; i < m; ++i) {
		cin >> a >> b >> c;
		d = (a*c*4);
		x = b-sqrt(d);
		y = bs(0, n-1, k, x);
		// cout << k[y] << "\n";
		// cout << d << "\n";
		// cout << ((b-mnk)*(b-mnk)) << "\n";
		// cout << ((b-mxk)*(b-mxk)) << "\n";		
		if (((b-k[y])*(b-k[y])) < d) {
			cout << "YES\n" << k[y] << "\n";
		}
		// else if (((b-mnk)*(b-mnk)) < d) {
		// 	cout << "YES\n" << mnk << "\n";
		// }
		else {
			cout << "NO\n"; 
		}
	} 

	// cout << bs(0, n-1, k, -2) << "\n";
	// cout << bs(0, n-1, k, -1) << "\n";
	// cout << bs(0, n-1, k, 0) << "\n";
	// cout << bs(0, n-1, k, 1) << "\n";
	// cout << bs(0, n-1, k, 2) << "\n";
	// cout << bs(0, n-1, k, 3) << "\n";
	// cout << bs(0, n-1, k, 4) << "\n";
	// cout << bs(0, n-1, k, 5) << "\n";
	// cout << bs(0, n-1, k, 6) << "\n";
	return;
}

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int t;
	cin >> t;
	while (t--) {
		solve();
		cout << "\n";
	}
	
	return 0;
}