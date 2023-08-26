#include <bits/stdc++.h>
#define ll long long
#define sz(x) (int)(x.size())
using namespace std;

void solve() {
	int n;
	cin >> n;
	vector<int> ans;
	ans.push_back(n);
	for (int i = 0; (1 << i) < n; ++i) {
		if ((1 << i) & n) {
			n -= (1 << i);
			ans.push_back(n);
		}
	}
	while (n > 1) {
		n /= 2;
		ans.push_back(n);
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
