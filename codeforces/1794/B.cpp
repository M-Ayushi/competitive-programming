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
	for (int i = 0; i < n-1; ++i) {
		if (a[i] == 1) ++a[i];
		if (a[i+1] == 1) ++a[i+1];

		if (a[i+1] % a[i] == 0) ++a[i+1];
	}

	for (auto z : a) cout << z << " ";
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