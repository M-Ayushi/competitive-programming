#include <bits/stdc++.h>
#define ll long long
#define sz(x) (int)(x.size())
using namespace std;

void solve() {
	// cout << "\n";
	ll n, a, p = 0, m = 0, sm = 0, r = -1;;
	cin >> n;
	vector<bool> f (n+1, 0);
	bool ans = 1;
	for (int i = 0; i < n-1; ++i) {
		cin >> a;
		if (a-p <= n) {
			if (f[a-p]) {
				if (r != -1) {
					ans = 0;
				}
				r = a-p;
			}
			else f[a-p] = 1;
		} 
		else {
			if (r != -1 || (a-p) >= 2*n) {
				ans = 0;
			}
			r = a-p;
		}

		p = a;
	}
	if (ans == 0) {
		cout << "NO\n";
		return;
	}

	for (int i = 1; i <= n; ++i) {
		// cout << f[i] << " ";
		if (f[i] == 0) {
			++m;
			sm += i;
		}
	}
	if ((((n*(n+1))/2) - a) == sm && m == 1) {
		cout << "YES\n";
	}
	else if (m != 2 || sm != r) {
		cout << "NO\n";
	}
	else cout << "YES\n";
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
