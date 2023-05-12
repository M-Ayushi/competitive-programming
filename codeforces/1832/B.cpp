#include <bits/stdc++.h>
#define ll long long
#define sz(x) (int)(x.size())
using namespace std;

void solve() {
	int n, k;
	cin >> n >> k;
	ll a[n], b[n+1];
	b[0] = 0;
	for (int i = 0; i < n; ++i) {
		cin >> a[i];
	}
	sort(a, a+n);
	for (int i = 0; i < n; ++i) {
		b[i+1] = b[i] + a[i];
	}

	ll m = 0;
	for (int i = 0; i <= k; ++i) {
		m = max(m, b[n-(k-i)]-b[i*2]);
		// cout << b[n-(k-i)] << " " << b[i*2] << " ";
		// cout << b[n-(k-i)]-b[i*2] << "\n";
	}
	
	cout << m << "\n";
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