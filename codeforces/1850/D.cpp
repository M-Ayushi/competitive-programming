#include <bits/stdc++.h>
#define ll long long
#define sz(x) (int)(x.size())
using namespace std;

void solve() {
	int n, k, ml = 1, cl = 1;
	cin >> n >> k;
	int a[n];
	for (int i = 0; i < n; ++i) {
		cin >> a[i];
	}
	sort(a, a+n);
	for (int i = 1; i < n; ++i) {
		if (a[i]-a[i-1] > k) {
			ml = max(ml, cl);
			cl = 0;
		}
		++cl;
	}
	ml = max(ml, cl);
	cout << (n-ml) << "\n";
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
