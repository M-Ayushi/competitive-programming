#include <bits/stdc++.h>
#define ll long long
#define sz(x) (int)(x.size())
using namespace std;

void solve() {
	int n, ans = 2, m = 1;
	cin >> n;
	int a;
	vector<int> v;
	cin >> a;
	v.push_back(a);
	for (int i = 1; i < n; ++i) {
		cin >> a;
		if (v.back() != a) {
			v.push_back(a);
			++m;
		}
	}

	for (int i = 1; i < m-1; ++i) {
		// if (v[i] == v[0]) ++c;

		if (v[i] > v[i-1] && v[i] > v[i+1]) ++ans;
		if (v[i] < v[i-1] && v[i] < v[i+1]) ++ans;
	}
	// if (v[m-1] == v[0]) ++c;

	if (m == 1) ans = 1;
	cout << ans << "\n";
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