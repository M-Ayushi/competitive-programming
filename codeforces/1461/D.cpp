#include <bits/stdc++.h>
#define ll long long
#define sz(x) (int)(x).size()
using namespace std;

const int l = (1e9);
const int w = (1e5)+1;
// bool m[l];
// vector<ll> a;
ll a[w];
set<int, greater<int>> m;
// map<int, bool> m;

void pretty (int s, int e, ll tot) {
	// vector<ll> x, y;
	// cout << s << " " << e << " " << tot << "\n";

	if (a[s] != a[e]) {
		ll h = (a[e]+a[s])/2, xs = 0;
		int div;
		// cout << "h = " << h << "\n";
		// ll xs = 0;
		for (div = s; div <= e; ++div) {
			if (a[div] <= h) {
				// x.push_back(a[i]);
				xs += a[div];
			}
			else break;
		}
		// cout << "div = " << div << "\n";

		// int div = s+1;
		// ll xs = 0;
		ll ys = tot-xs;

		// if (xs < l) m[xs] = 1;
		// if (ys < l) m[ys] = 1;
		if (xs <= l) m.insert(xs);
		if (ys <= l) m.insert(ys);

		// cout << s << " " << div << " " << xs << "\n";
		// cout << div+1 << " " << e << " " << ys << "\n";

		pretty(s, div-1, xs);
		pretty(div, e, ys);
	}

	// int h = (a[sz(a)-1]+a[0])/2;
	// ll xs = 0, ys = 0;
	// if (h < a[sz(a)-1]) {
	// 	for (int i = 0; i < sz(a); ++i) {
	// 		if (a[i] <= h) {
	// 			x.push_back(a[i]);
	// 			xs += a[i];
	// 		}
	// 		else {
	// 			y.push_back(a[i]);
	// 			ys += a[i];
	// 		}
	// 	}

	// 	if (xs < l) m[xs] = 1;
	// 	if (ys < l) m[ys] = 1;

	// 	pretty(x);
	// 	pretty(y);
	// }
}
 
int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int t;
	cin >> t;
	while (t--) {
		// a.clear();
		m.clear();
		// cout << "here";
		int n, q;
		ll s = 0, x;
		cin >> n >> q;
		// vector<ll> a;
		for (int i = 0; i < n; ++i) {
			// cin >> x;
			// a.push_back(x);
			cin >> a[i];
			s += a[i];
		}

		sort(a, a+n);
		if (s <= l) m.insert(s);
		// for (int ran = 0; ran < n; ++ran) cout << a[ran] << " ";
		// cout << "\n\n";
		// sort(a.begin(), a.end());
		// for (int i = 0; i < min(s, (ll)l); ++i) m[i] = 0;
		// if (s < l) m[s] = 1;
		pretty(0, n-1, s);

		// for(int i = 0; i <= s; ++i) {
		// 	cout << i << " : " << m[i] << "\n";
		// }

		for (int i = 0; i < q; ++i) {
			cin >> x;
			// if (x > s || m[x] == 0) cout << "No\n";
			if (x <= s && m.count(x)) cout << "Yes\n";
			else cout << "No\n";
			// cout << "done\n";
		}
	}
	
    return 0;
}
