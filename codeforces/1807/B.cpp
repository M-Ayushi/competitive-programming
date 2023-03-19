#include <bits/stdc++.h>
#define ll long long
#define sz(x) (int)(x.size())
using namespace std;

void solve() {
	int n;
	cin >> n;
	int a[n], e = 0, o = 0;
	for (int i = 0; i < n; ++i) {
		cin >> a[i];
		if (a[i] % 2) o += a[i];
		else e += a[i];
	}

	if (e > o) cout << "YES\n";
	else cout << "NO\n";
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