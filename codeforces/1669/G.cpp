#include <bits/stdc++.h>
#define ll long long
#define sz(x) (int)(x).size()
using namespace std;

void solve() {
	int n, m;
	cin >> n >> m;
	string a[n];
	for (int i = 0; i < n; ++i) {
		cin >> a[i];
	}

	int c, l;
	for (int i = 0; i < m; ++i) {
		c = 0, l = -1;
		for (int j = 0; j < n; ++j) {
			if (a[j][i] == '*') ++c;
			else if (a[j][i] == 'o') {
				// if (c < (j-l+1)) {
					for (int k = j-1; k >= j-c; --k) {
						a[k][i] = '*';
					}
					for (int k = l+1; k < j-c; ++k) {
						a[k][i] = '.';
					}
				// }

				c = 0, l = j;
			}
		}
		// cout << "c = " << c << "\n";
		// cout << l+1 << " " << (n-1-c) << " " << n-1 << "\n";

		// if (c < (n-l+1)) {
			for (int k = n-1; k >= n-c; --k) {
				a[k][i] = '*';
			}
			for (int k = l+1; k < n-c; ++k) {
				a[k][i] = '.';
			}
		// }

		// c = 0, l = n;
	}

	for (int x = 0; x < n; ++x) {
		for (auto y : a[x]) cout << y;
		cout << "\n";
	}
	cout << "\n";

	return;
}
 
int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int t;
	cin >> t;
	while (t--) {
		solve();
	}
	
    return 0;
}
