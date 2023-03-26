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
	int d = a[n-1]-a[0];
	if (d == 0) {
		cout << "No\n";
		return;
	}

	cout << "Yes\n";

	int l = 0, r = n-1, s = 0;
	while (l <= r) {
		if (s > 0) {
			cout << a[l] << " ";
			s += a[l];
			++l;
		}
		else {
			cout << a[r] << " ";
			s += a[r];
			--r;
		}
		// cout << s << "\n";
	}

	// for (int i = 0; i < n/2; ++i) {
	// 	cout << a[n-i-1] << " " << a[i] << " ";
	// }
	// if (n % 2) {
	// 	cout << a[n/2] << " ";
	// }
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