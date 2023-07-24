#include <bits/stdc++.h>
#define ll long long
#define sz(x) (int)(x.size())
using namespace std;

void solve() {
	int n = 8;
	string a;
	for (int i = 0; i < n; ++i) {
		cin >> a;
		for (int j = 0; j < n; ++j) {
			if (a[j] != '.') cout << a[j];
		}
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
