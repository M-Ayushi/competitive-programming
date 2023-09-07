#include <bits/stdc++.h>
#define ll long long
#define sz(x) (int)(x.size())
using namespace std;

void solve() {
	int l, r;
	cin >> l >> r;
	int ans = -1, ansb = -1;
	if (l == r && l % 2) {
		for (int i = 3; i*i <= l; i += 2) {
			if (l % i == 0) ans = i, ansb = l-i;
		}
	}
	else {
		ans = r / 2;
		ansb = ans;
		if (ansb < 2) {
			ansb = -1;
		}
	}

	if (ansb != -1) cout << ans << " ";
	cout << ansb << "\n";

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
