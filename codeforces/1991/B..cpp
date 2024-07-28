#include <bits/stdc++.h>
#define ll long long
#define sz(x) (int)(x.size())
using namespace std;

void solve() {
	int n;
	cin >> n;
	int a[n], b[n];
	b[n-1] = 0;
	for (int i = 0; i < n-1; ++i) {
		cin >> a[i];
		b[i] = a[i];
	}
	for (int i = 1; i < n; ++i) {
		b[i] = (b[i]|a[i-1]);
		if ((b[i]&b[i-1]) != a[i-1]) {
			cout << "-1\n";
			return;
		}
	}

	for (int i = 0; i < n; ++i) cout << b[i] << " ";
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
