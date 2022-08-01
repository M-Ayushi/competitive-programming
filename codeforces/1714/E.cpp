#include <bits/stdc++.h>
#define ll long long
#define sz(x) (int)(x).size()
using namespace std;

void solve() {
	int n, z = 0, e = 0, o = 0, mn = 1e9, mx = 0;
	cin >> n;
	int a[n];
	for (int i = 0; i < n; ++i) {
		cin >> a[i];
		if (a[i]%2) a[i] += (a[i]%10);
		if (a[i]%10 == 6) a[i] += (a[i]%10);
		mn = min(mn, a[i]);
		mx = max(mx, a[i]);

		if (a[i] % 10 == 0) ++z;
		else {
			if ((a[i]/10) % 2) ++o;
			else ++e;
		}
	}

	if (z) {
		if (mn == mx) cout << "Yes\n";
		else cout << "No\n";
	}
	else {
		if (o == n || e == n) cout << "Yes\n";
		else cout << "No\n";
	}
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
