#include <bits/stdc++.h>
#define ll long long
#define sz(x) (int)(x.size())
using namespace std;

void solve() {
	int n, k;
	cin >> n >> k;
	int a[n], b[n], c[n];
	map<int, vector<int>> o;
	for (int i = 0; i < n; ++i) {
		cin >> a[i];
		o[a[i]].push_back(i);
	}
	for (int i = 0; i < n; ++i) {
		cin >> b[i];
	}
	sort(a, a+n);
	sort(b, b+n);
	for (int i = 0; i < n; ++i) {
		c[(o[a[i]].back())] = b[i];
		o[a[i]].pop_back();
	} 
	for (int i = 0; i < n; ++i) cout << c[i] << " ";
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