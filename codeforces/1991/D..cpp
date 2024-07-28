#include <bits/stdc++.h>
#define ll long long
#define sz(x) (int)(x.size())
using namespace std;

void solve() {
	int n;
	cin >> n; 
	vector<int> def = {1, 2, 2, 3, 3};
	if (n < 6) {
		cout << ((n+2)/2) << "\n";
		for (int i = 0; i < n; ++i) {
			cout << def[i] << " ";
		}
		cout << "\n";
	}
	else {
		cout << "4\n";
		for (int i = 1; i <= n; ++i) {
			if (i % 4 == 0) cout << "4 ";
			else cout << (i%4) << " ";
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
