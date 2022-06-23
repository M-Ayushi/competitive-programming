#include <bits/stdc++.h>
#define ll long long
#define sz(x) (int)(x).size()
using namespace std;

const int l = (1e9), w = (1e5)+1;
ll a[w];
set<int> m;

void pretty (int s, int e, ll tot) {
	if (a[s] != a[e]) {
		ll h = (a[e]+a[s])/2, xs = 0, ys;
		int div;
		for (div = s; div <= e; ++div) {
			if (a[div] <= h) {
				xs += a[div];
			}
			else break;
		}
		ys = tot-xs;

		if (xs <= l) m.insert(xs);
		if (ys <= l) m.insert(ys);

		pretty(s, div-1, xs);
		pretty(div, e, ys);
	}
}
 
int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int t;
	cin >> t;
	while (t--) {
		m.clear();
		int n, q;
		ll s = 0, x;
		cin >> n >> q;
		for (int i = 0; i < n; ++i) {
			cin >> a[i];
			s += a[i];
		}

		sort(a, a+n);
		if (s <= l) m.insert(s);
		pretty(0, n-1, s);

		for (int i = 0; i < q; ++i) {
			cin >> x;
			if (x <= s && m.count(x)) cout << "Yes\n";
			else cout << "No\n";
		}
	}
	
    return 0;
}
