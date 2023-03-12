#include <bits/stdc++.h>
#define ll long long
#define sz(x) (int)(x.size())
using namespace std;

void solve() {
	int n, x, p;
	cin >> n >> x >> p;
	// int m = (n-x) % n;
	int c = x;
	for (int i = 1; i <= min(2*n, p); ++i) {
		c += i;
		c = c % n;
		if (c == 0) {
			cout << "Yes\n";
			return;
		}
		// cout << i << " " << c << "\n";
	}
	cout << "No\n";
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