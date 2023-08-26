#include <bits/stdc++.h>
#define ll long long
#define sz(x) (int)(x.size())
using namespace std;

void solve() {
	int n, ans = 0;
	cin >> n;
	vector<int> c(n, 0);
	vector<int> l(n, 0), r(n, 0), r2(n, 0);
	int lr;
	string s;
	for (int i = 0; i < n; ++i) {
		cin >> s;
		lr = 0;
		// for (auto x : r) {
		// 	cout << x << " ";
		// }
		// cout << "\n";
		for (int j = 0; j < n; ++j) {
			swap(r[j], lr);

			if (j < n-1) {
				l[j] = l[j+1];
			}
			else l[j] = 0;

			c[j] += l[j] + r[j];

			// cout << c[j] << " ";
			// cout << i << " " << j << "\n";
			// cout << l[j] << " " << r[j] << " " << c[j] << "\n";
			
			if ((c[j] % 2 && s[j] == '0') || (c[j] % 2 == 0 && s[j] == '1')) {
				// cout << i << " " << j << " " << c[j] << "\n\n";
				++ans;
				c[j]++;
				l[j]++;
				r[j]++;
			}
		}
		// cout << "\n";
	}
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
