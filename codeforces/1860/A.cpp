#include <bits/stdc++.h>
#define ll long long
#define sz(x) (int)(x.size())
using namespace std;

void solve() {
	string s;
	cin >> s;
	int n = sz(s);
	int x = 0, y = n-1;
	while (s[x] == '(' && x < n) ++x;
	while (s[y] == ')' && y >= 0) --y;

	// cout << x << " " << y << "\n";
	if (x == y+1) {
		if (n == 2 && s == "()") cout << "NO\n";
		else {
			cout << "YES\n";
			for (int i = 0; i < n; ++i) {
				cout << "()";
			}
			cout << "\n";
		}
	}
	else {
		cout << "YES\n";
		for (int i = 0; i < n; ++i) {
			cout << "(";
		}
		for (int i = 0; i < n; ++i) {
			cout << ")";
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
