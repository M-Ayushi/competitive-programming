#include <bits/stdc++.h>
#define ll long long
#define sz(x) (int)(x.size())
using namespace std;

void solve() {
	int n;
	cin >> n;
	int a[n];
	for (int i = 0; i < n; ++i) {
		cin >> a[i];
	}
	sort(a, a+n);
	if (a[0] == a[n-1]) cout << "NO\n";
	else {
		cout << "YES\n";
		for (int i = 0; i < n/2; ++i) {
			cout << a[n-1-i] << " " << a[i] << " ";
		}
		if (n % 2) cout << a[n/2] << " ";
		cout << "\n";
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