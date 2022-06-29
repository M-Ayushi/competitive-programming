#include <bits/stdc++.h>
#define ll long long
#define sz(x) (int)(x).size()
using namespace std;

void solve() {
	int n;
	cin >> n;
	int a[n], b = 0; //, b[n+1];
	map<int, int> c;
	// b[0] = 0;
	c[b] = 1;
	for (int i = 0; i < n; ++i) {
		cin >> a[i];
		b += a[i];
		c[b] = i+1;
		// b[i+1] = b[i]+a;
	}

	int ans = 0, d = 0; 
	b = b >> 1;
	// cout << b << "...\n";
	// b = 0;
	for (int i = n-1; i >= 0 && d <= b; --i) {
		d += a[i];
		if (d <= b && c[d]) {
			// cout << c[d] << " " << (n-i) << "\n";
			ans = max(ans, (c[d]+(n-i)));
		}
	}

	//, x;
	// // cout << "b[n] = " << b[n] << "\n";

	// for (int i = n; i >= 0 && ans == 0; --i) {
	// 	if (b[i]*2 <= b[n]) {
	// 		x = b[n]-b[i];
	// 		// cout << i << " " << x << "\n";
	// 		for (int j = i; j <= n && b[j] <= x; ++j) {
	// 			// cout << b[j] << "\n";
	// 			if (b[j] == x) {
	// 				ans = n-(j-i);
	// 				break;
	// 			}
	// 		}
	// 	}
	// }

	// for (int i = n; i >= 0 && ans == 0; --i) {
	// 	// cout << "b[i] = " << b[i] << "\n";
	// 	for (int j = i; j <= n; ++j) {
	// 		// cout << b[i] << " " << (b[n]-b[j]) << "\n";
	// 		if (b[i] == b[n]-b[j]) {
	// 			ans = i+(n-j);
	// 			break;
	// 		}
	// 	}
	// }

	cout << ans << "\n";

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

