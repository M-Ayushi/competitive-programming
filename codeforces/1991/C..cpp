#include <bits/stdc++.h>
#define ll long long
#define sz(x) (int)(x.size())
using namespace std;

void solve() {
	int n, mn = 1e9, mx = 0, av;
	cin >> n;
	int a[n];
	vector<int> ans;
	for (int i = 0; i < n; ++i) {
		cin >> a[i];
		mn = min(mn, a[i]);
		mx = max(mx, a[i]);
	}
	while (mx != 0 && sz(ans) <= 40) {
		av = (mn+mx)/2;
		ans.push_back(av);
		mn = 1e9, mx = 0;
		for (int i = 0; i < n; ++i) {
			a[i] = abs(a[i]-av);
			mn = min(mn, a[i]);
			mx = max(mx, a[i]);
		}
	}
	if (mx != 0 || sz(ans) > 40) cout << "-1\n";
	else {
		cout << sz(ans) << "\n";
		for (auto x : ans) cout << x << " ";
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
