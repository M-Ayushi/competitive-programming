#include <bits/stdc++.h>
#define ll long long
#define sz(x) (int)(x).size()
using namespace std;

void solve() {
	string s, a;
	cin >> s;
	int n, m = sz(s), x;
	cin >> n;
	int w[m][2];
	for (int i = 0; i < m; ++i) {
		w[i][0] = -1;
		w[i][1] = -1;
	}
	for (int i = 0; i < n; ++i) {
		cin >> a;
		x = sz(a);
		for (int j = 0; j < m; ++j) {
			if (m-j >= x && s.substr(j, x) == a) {
				if (j+x > w[j][0]) {
					w[j][0] = j+x;
					w[j][1] = i;
				}
			}
			// else w[j][i] = 0;
		}
	}
	

	// for (int i = 0; i < m && ans; ++i) {
	// 	// for (int j = 0; j < n; ++j) cout << w[i][j] << " ";
	// 	// cout << "\n";
	// 	mx = 0;

	// 	for (int j = max(n-1, i+1); j > l; --j) {
	// 		if (w[i][j] > mx) {
	// 			mx = w[i][j];
	// 			c = 
	// 			b = j;
	// 		}
	// 	}

	// 	if (mx) {
	// 		y.push_back(mx)
	// 	}
	// 	else {
	// 		ans = 0;
	// 	}
	// }
	// for (int i = 0; i < m; ++i) {
	// 	cout << w[i][0] << " " << w[i][1] << "\n";
	// }
	// cout << "\n";

	int l = -1, mx, c, b;
	bool ans = 1;
	vector<int> y;
	vector<int> z;
	for (int i = 0; i < m && ans; ++i) {
		mx = 0;
		for (int j = i; j > l; --j) {
			if (w[j][0] > mx) {
				mx = w[j][0];
				b = w[j][1];
				c = j;
			}
		}
		// cout << mx << " " << b << " " << c << "\n";
		if (mx > i) {
			++b;
			++c;
			
			y.push_back(b);
			z.push_back(c);
			l = c-1;
			i = mx-1;
		}
		else ans = 0;
	}

	if (ans) {
		cout << sz(y) << "\n";
		for (int i = 0; i < sz(y); ++i) {
			cout << y[i] << " " << z[i] << "\n";
		}
	}
	else cout << "-1\n";

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
