#include <bits/stdc++.h>
#define ll long long
#define sz(x) (int)(x).size()
using namespace std;

int bs(int l, int m, int r) {
	cout << "? " << l << " " << m << "\n";
	// vector<int> v;
	int x, f = 0, z;
	for (int i = l; i <= m; ++i) {
		// cout << i << "\n";
		cin >> x;
		if (x >= l && x <= m) ++f;
	}
	// cout << f << "\n";

	// if (l == m)

	if (f % 2) {
		if (l == m) return l;
		z = (l+m)/2;
		return bs(l, z, m);
		// cout << l << " " << z << " " << m << "\n";
		return z;
	}
	else {
		++m;
		if (m == r) return m;
		z = (m+r)/2;
		return bs(m, z, r);
		// cout << m << " " << z << " " << r << "\n";
		return z;
	}
}

void solve() {
	int n;
	cin >> n;

	int ans = bs(1, (n+1)/2, n);
	cout << "! " << ans << "\n";
	
	return;
}
 
int main() {
	// ios_base::sync_with_stdio(0);
	// cin.tie(0);
	int t;
	cin >> t;
	while (t--) solve();
	
    return 0;
}
