#include <bits/stdc++.h>
#define ll long long
#define sz(x) (int)(x.size())
using namespace std;

void solve() {
	int n, k, a;
	cin >> n >> k;
	vector<array<int, 2>> va;
	vector<int> ans(k+1, 0);
	for (int i = 0; i < n; ++i) {
		cin >> a;
		va.push_back({a, i});
	}
	int l = n-1, r = 0;
	sort(va.begin(), va.end());
	for (int i = n-1; i >= 0; --i) {
		l = min(l, va[i][1]);
		r = max(r, va[i][1]);
		ans[va[i][0]] = max(ans[va[i][0]], r-l+1);
	}
	for (int i = 1; i <= k; ++i) cout << (ans[i]*2) << " ";
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
