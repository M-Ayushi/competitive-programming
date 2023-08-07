#include <bits/stdc++.h>
#define ll long long
#define sz(x) (int)(x.size())
using namespace std;

void solve() {
	int n, o = 0, a;
	cin >> n;
	for (int i = 0; i < n; ++i) {
		cin >> a;
		if (a % 2) ++o;
	}

	if (o % 2 == 0) cout << "YES\n";
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
