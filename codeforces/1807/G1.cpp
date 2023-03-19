#include <bits/stdc++.h>
#define ll long long
#define sz(x) (int)(x.size())
using namespace std;

void solve() {
	int n;
	cin >> n;
	int a[n];
	for (int i = 0; i < n; ++i) {
		cin >> a[i];
	}
	sort(a, a+n);
	vector<int> p(5001, 0);
	p[1] = 1;
	if (a[0] != 1) {
		cout << "NO\n";
		return;
	}
	for (int i = 1; i < n; ++i) {
		if (p[a[i]] == 0) {
			cout << "NO\n";
			return;
		}

		for (int j = 5000; j >= 1; --j) {
			// cout << (p[j] && ((j+a[i]) <= 5000)) << "\n";
			if (p[j] && ((j+a[i]) <= 5000)) {
			// if (p[j]) {
				p[j+a[i]] = 1;
			}
		}
		// for (int j = 1; j < 10; ++j) cout << p[j] << " ";
		// cout << "\n"; 
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