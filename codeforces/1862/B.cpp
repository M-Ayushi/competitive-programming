#include <bits/stdc++.h>
#define ll long long
#define sz(x) (int)(x.size())
using namespace std;

void solve() {
	int n;
	cin >> n;
	int a[n];
	for (int i = 0; i < n; ++i) {
		cin >> a[i];
	}

	vector<int> ans;
	ans.push_back(a[0]);
	// cout << ((n*2)-1) << "\n";
	// cout << a[0] << " ";
	for (int i = 1; i < n; ++i) {		
		if (a[i] < a[i-1]) ans.push_back(a[i]);
		ans.push_back(a[i]);
		// if (a[i] < a[i-1]) cout << min(a[i-1], a[i])-1 << " ";
		// cout << a[i] << " ";
	}
	cout << sz(ans) << "\n";
	for (auto x : ans) cout << x << " ";
	cout << "\n";
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
