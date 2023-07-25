#include <bits/stdc++.h>
#define ll long long
#define sz(x) (int)(x.size())
using namespace std;

void solve() {
	int n, k, cnt = 0, lt = 0;
	cin >> n >> k;
	int a[n];
	for (int i = 0; i < n; ++i) {
		cin >> a[i];
		if (a[i] == a[0] && cnt < k) {
			++cnt;
			lt = i;
		}
	}

	if (cnt < k) {
		cout << "NO\n";
		return;
	}

	if (a[0] != a[n-1]) {
		cnt = 0;
		for (int i = n-1; i > lt; --i) {
			if (a[i] == a[n-1]) ++cnt;
		}

		if (cnt < k) {
			cout << "NO\n";
			return;
		}
	}
	
	cout << "YES\n";

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
