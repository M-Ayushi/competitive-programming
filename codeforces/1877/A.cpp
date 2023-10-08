#include <bits/stdc++.h>
#define ll long long
#define sz(x) (int)(x.size())
using namespace std;

void solve() {
	int n, s = 0, a;
	cin >> n;
	for (int i = 1; i < n; ++i) {
		cin >> a;
		s += a;
	}
	cout << (0-s) << "\n";
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
