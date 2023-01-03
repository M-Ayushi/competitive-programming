#include <bits/stdc++.h>
#define ll long long
#define sz(x) (int)(x.size())
using namespace std;

void solve() {
	int n;
	cin >> n;
	if (n == 3) cout << "NO\n";
	else if (n % 2) {
		int x = (n-2)/2, y = (n/2);

		cout << "YES\n";
		for (int i = 0; i < n/2; ++i) {
			// cout << "1 -2 ";
			cout << x << " -" << y << " ";
		} 
		cout << x << "\n";
	}
	else {
		cout << "YES\n";
		for (int i = 0; i < n/2; ++i) {
			cout << "1 -1 ";
		} 
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