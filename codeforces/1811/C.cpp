#include <bits/stdc++.h>
#define ll long long
#define sz(x) (int)(x.size())
using namespace std;

void solve() {
	int n;
	cin >> n;
	vector<int> v(n+1, 0);
	int a[n];
	v[0] = 1e9;
	for (int i = 1; i < n; ++i) {
		cin >> a[i];
	}
	// int c = 0;

	for (int i = 1; i < n; ++i) {
		if (max(v[i], v[i+1]) != a[i]) {
			if (v[i] > v[i-1] || a[i] > max(v[i], v[i-1])) {
				v[i+1] = a[i];
			}
			else {
				v[i] = a[i];
			}
		}
	}

	// for (int i = 1; i < n; ++i) {
	// 	if (a[i] > a[i-1]) {
	// 		// cout << "0 ";
	// 		v[c] = 0;
	// 		++c;
	// 	}
	// 	// cout << a[i] << " ";
	// 	v[c] = a[i];
	// 	++c;

	// }
	for (int i = 1; i <= n; ++i) cout << v[i] << " ";
	cout << "\n";
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