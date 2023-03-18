#include <bits/stdc++.h>
#define ll long long
#define sz(x) (int)(x.size())
using namespace std;

void solve() {
	int n;
	cin >> n;
	// vector<int> c(n, 0);
	int z = 0, o = 0;
	int a;
	for (int i = 0; i < n; ++i) {
		cin >> a;

		if (a == 0) ++z;
		if (a == 1) ++o;

		// c[min(n, a)]++;
	}

	if (z <= ((n+1)/2)) {
		cout << "0\n";
	}
	else if (o > 0 && z + o == n) {
		cout << "2\n";
	}
	else {
		cout << "1\n";
	}
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