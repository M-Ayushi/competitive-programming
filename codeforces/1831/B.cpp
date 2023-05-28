#include <bits/stdc++.h>
#define ll long long
#define sz(x) (int)(x.size())
using namespace std;

void solve() {
	int n, c = 0;
	cin >> n;
	int a[n+1], b[n+1];
	a[0] = 0, b[0] = 0;
	vector<int> ma((2*n)+1, 0);
	vector<int> mb((2*n)+1, 0);
	for (int i = 1; i <= n; ++i) {
		cin >> a[i];
		if (a[i] == a[i-1]) {
			++c;
		}
		else {
			ma[a[i-1]] = max(ma[a[i-1]], c);
			c = 1;
		}
	}
	ma[a[n]] = max(ma[a[n]], c);
	c = 0;
	for (int i = 1; i <= n; ++i) {
		cin >> b[i];
		if (b[i] == b[i-1]) {
			++c;
		}
		else {
			mb[b[i-1]] = max(mb[b[i-1]], c);
			c = 1;
		}
	}
	mb[b[n]] = max(mb[b[n]], c);
	int ans = 0;
	for (int i = 0; i <= (2*n); ++i) {
		ans = max(ans, ma[i] + mb[i]);
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