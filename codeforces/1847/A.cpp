#include <bits/stdc++.h>
#define ll long long
#define sz(x) (int)(x.size())
using namespace std;

void solve() {
	int n, s = 0, x, k;
	cin >> n >> k;
	int a[n];
	vector<int> v;
	for (int i = 0; i < n; ++i) {
		cin >> a[i];
		if (i) {
			x = abs(a[i]-a[i-1]);
			v.push_back(x);
			s += x;
		}
	}
	sort(v.begin(), v.end());
	for (int i = n-2; i >= n-k; --i) {
		s -= v[i];
	}
	cout << s << "\n";
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