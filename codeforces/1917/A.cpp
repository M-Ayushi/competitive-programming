#include <bits/stdc++.h>
#define ll long long
#define sz(x) (int)(x.size())
using namespace std;

void solve() {
	int n, m = 0, z = 0;
	cin >> n;
	int a[n];
	for (int i = 0; i < n; ++i) {
		cin >> a[i];
		if (a[i] < 0) ++m;
		if (a[i] == 0) ++z;
	}
	if (z || m % 2) {
		cout << "0\n";
	}
	else {
		cout << "1\n";
		cout << "1 0\n";
	}
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
