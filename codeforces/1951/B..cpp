#include <bits/stdc++.h>
#define ll long long
#define sz(x) (int)(x.size())
using namespace std;

void solve() {
	int n, k, c = 0; //, ans = 0;
	cin >> n >> k;
	--k;
	int a[n];
	// bool w = 1;
	for (int i = 0; i < n; ++i) {
		cin >> a[i];
	}
	
	int l = n;
	for (int i = 0; i < n; ++i) {
		if (a[i] > a[k]) {
			l = i;
			break;
		}
	}
	if (l < k) {
		if (l == 0) c = 0;
		else c = 1;
		// cout << "c = " << c << "\n";
		for (int i = l+1; i < n; ++i) {
			if (a[k] > a[i]) ++c;
			else break;
		}
		// cout << "c = " << c << "\n";
	}
	// cout << l << " " << c << "\n";
	cout << max(l-1, c) << "\n";
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
