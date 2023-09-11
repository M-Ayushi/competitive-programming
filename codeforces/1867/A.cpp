#include <bits/stdc++.h>
#define ll long long
#define sz(x) (int)(x.size())
using namespace std;

void solve() {
	int n, a;
	cin >> n;
	int ans[n];
	vector<array<int, 2>> v;
	for (int i = 0; i < n; ++i) {
		cin >> a;
		v.push_back({a, i});
	}
	sort(v.begin(), v.end());
	for (int i = 0; i < n; ++i) {
		ans[v[i][1]] = i;
	} 
	for (int i = 0; i < n; ++i) cout << (n-ans[i]) << " ";
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
