#include <bits/stdc++.h>
#define ll long long
#define sz(x) (int)(x.size())
using namespace std;

void solve() {
	int n;
	cin >> n;
	int a[n], b;
	vector<array<int, 2>> c;
	for (int i = 0; i < n; ++i) {
		cin >> a[i];
	}
	for (int i = 0; i < n; ++i) {
		cin >> b;
		c.push_back({a[i]-b, i+1});
	} 
	sort(c.begin(), c.end());
	int ans = 0;
	for (int i = n-1; i >= 0; --i) {
		if (c[i][0] == c[n-1][0]) ++ans;
		else break;
	}
	cout << ans << "\n";
	for (int i = n-ans; i < n; ++i) {
		cout << c[i][1] << " ";
	}
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
