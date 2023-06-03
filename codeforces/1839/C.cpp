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
	if (a[n-1] == 1) {
		cout << "NO\n";
		return;
	}

	cout << "YES\n";
	int c = 0;
	for (int i = n-1; i > 0; --i) {
		if (a[i-1] == 1) {
			cout << "0 ";
			++c;
		}
		else if (a[i] == 1) {
			cout << c << " ";
			c = 0;
		}
		else {
			cout << "0 ";
		}
		// if (a[i] == 1 && a[i]) {
		// 	++c;
		// 	cout << "0 ";
		// }
		// else {
		// 	cout << c << " ";
		// 	c = 0;
		// }
	}
	cout << c << "\n";

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