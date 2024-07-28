#include <bits/stdc++.h>
#define ll long long
#define sz(x) (int)(x.size())
using namespace std;

void solve() {
	int n, m = 0, a;
	cin >> n;
	for (int i = 1; i <= n; ++i) {
		cin >> a;
		if (i % 2) m = max(m, a);
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
