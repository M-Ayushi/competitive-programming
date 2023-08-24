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

	for (int i = 0; i < n; ++i) {
		// cout << a[i] << " " << a[a[i]-1] << "\n";
		// if (a[i] < n) cout << a[a[i]] << "\n";
		if (a[i] < n && (a[i]-1) >= 0 && a[a[i]-1] >= (i+1) && a[a[i]] < (i+1)) {
			++ans;
		}
		else if (a[i] == n && (a[i]-1) >= 0 && a[a[i]-1] >= (i+1)) {
			++ans;
		}
		else break;
	}
	if (ans == n) cout << "YES\n";
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
