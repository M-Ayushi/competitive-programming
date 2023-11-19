#include <bits/stdc++.h>
#define ll long long
#define sz(x) (int)(x.size())
using namespace std;

void solve() {
	int n, k;
	cin >> n >> k;
	string s;
	cin >> s;
	int c = 0;
	for (int i = 0; i < n; ++i) {
		if (s[i] == 'B') ++c;
	}
	if (c == k) cout << "0\n";
	else if (c < k) {
		cout << "1\n";
		for (int i = 0; i < n; ++i) {
			if (s[i] == 'A') ++c;
			if (c == k) {
				cout << (i+1) << " B\n";
				break;
			}
		}
	}
	else {
		cout << "1\n";
		for (int i = 0; i < n; ++i) {
			if (s[i] == 'B') --c;
			if (c == k) {
				cout << (i+1) << " A\n";
				break;
			}
		}
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
