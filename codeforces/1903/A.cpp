#include <bits/stdc++.h>
#define ll long long
#define sz(x) (int)(x.size())
using namespace std;

void solve() {
	int n, k;
	cin >> n >> k;
	int a[n];
	for (int i = 0; i < n; ++i) {
		cin >> a[i];
	}

	bool s = 1;
	for (int i = 1; i < n; ++i) {
		if (a[i] < a[i-1]) s = 0;
	}

	if (k == 1 && s == 0) cout << "NO\n";
	else cout << "YES\n";
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
