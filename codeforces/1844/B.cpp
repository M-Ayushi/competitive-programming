#include <bits/stdc++.h>
#define ll long long
#define sz(x) (int)(x.size())
using namespace std;

void solve() {
	int n;
	cin >> n;
	if (n < 3) {
		for (int i = 1; i <= n; ++i) {
			cout << i << " ";
		}
		cout << "\n";
	}
	else {
		cout << "3 ";
		for (int i = 5; i <= n; i += 2) cout << i << " ";
		cout << "1 ";
		for (int i = 4; i <= n; i += 2) cout << i << " ";
		cout << "2\n";
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
