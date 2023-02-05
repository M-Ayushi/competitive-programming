#include <bits/stdc++.h>
#define ll long long
#define sz(x) (int)(x.size())
using namespace std;

void solve() {
	int n, w, h;
	cin >> n >> w >> h;
	int l = -1e9, r = 1e9, el, er, pl, pr;
	int a[n], b[n];
	for (int i = 0; i < n; ++i) {
		cin >> a[i];
	}
	for (int i = 0; i < n; ++i) {
		cin >> b[i];
	}

	for (int i = 0; i < n; ++i) {
		// cout << l << " " << r << "\n";
		el = b[i]+h-w;
		er = b[i]-h+w;
		// cout << el << " " << er << "\n";

		pl = a[i]-el;
		pr = a[i]-er;

		// cout << pl << " " << pr << "\n\n";


		if (min(pl, pr) > r || max(pl, pr) < l) {
			cout << "NO\n";
			return;
		}

		l = max(l, min(pl, pr));
		r = min(r, max(pl, pr));
	} 

	cout << "YES\n";

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