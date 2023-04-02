#include <bits/stdc++.h>
#define ll long long
#define sz(x) (int)(x.size())
using namespace std;

void solve() {
	int n;
	cin >> n;
	int a, x = 0;
	for (int i = 0; i < n; ++i) {
		cin >> a;
		x = x ^ a;
	}
	if (n % 2 || x == 0) cout << x << "\n";
	else cout << "-1\n";
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
