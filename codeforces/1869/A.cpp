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

	if (n % 2) {
		cout << "4\n";
		cout << "1 " << n << "\n";
		cout << "2 " << n << "\n";
		cout << "1 2\n";
		cout << "1 2\n";
	}
	else {
		cout << "2\n";
		cout << "1 " << n << "\n";
		cout << "1 " << n << "\n";
	}

	// cout << "8\n";
	// for (int i = 0; i < 7; ++i) {
	// 	c = 0, l = -1;
	// 	for (int j = 0; j < n; ++j) {
	// 		if (a[j] & (1 << i)) {
	// 			++c;
	// 			if (c % 2) l = j+1;
	// 			else l = n+1;
	// 		}
	// 	}
	// 	if (l == n+1 || l == -1) cout << "1 " << n << "\n";
	// 	else cout << l << " " << l << "\n";
	// }
	// cout << "1 " << n << "\n";
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
