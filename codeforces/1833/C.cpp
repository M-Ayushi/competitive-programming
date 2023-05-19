#include <bits/stdc++.h>
#define ll long long
#define sz(x) (int)(x.size())
using namespace std;

const int M = 1e9 + 1;

void solve() {
	int n, mo = M, me = M;
	cin >> n;
	int a[n];
	for (int i = 0; i < n; ++i) {
		cin >> a[i];
		if (a[i] % 2) mo = min(mo, a[i]);
		else me = min(me, a[i]);
	}

	if (max(me, mo) == M) {
		cout << "YES\n";
	}
	else if (me - mo > 0) {
		cout << "YES\n";
	}
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