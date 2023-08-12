#include <bits/stdc++.h>
#define ll long long
#define sz(x) (int)(x.size())
using namespace std;

void solve() {
	int n, ans = 0;
	cin >> n;
	int a[n];
	for (int i = 0; i < n; ++i) {
		cin >> a[i];
	}
	sort(a, a+n);
	if (a[0] == a[n-1]) cout << "-1\n";
	else {
		for (int i = n-1; i >= 0; --i) {
			if (a[i] == a[n-1]) ++ans;
			else break;
		}

		cout << (n-ans) << " " << ans << "\n";
		for (int i = 0; i < n; ++i) {
			if (a[i] != a[n-1]) cout << a[i] << " ";
			else break;
		}
		cout << "\n";
		for (int i = 0; i < ans; ++i) cout << a[n-1] << " ";
		cout << "\n";
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
