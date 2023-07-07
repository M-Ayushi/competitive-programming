#include <bits/stdc++.h>
#define ll long long
#define sz(x) (int)(x.size())
using namespace std;

void solve() {
	string a[3];
	for (int i = 0; i < 3; ++i) {
		cin >> a[i];
	}
	for (int i = 0; i < 3; ++i) {
		if (a[i][0] != '.' && a[i][0] == a[i][1] && a[i][1] == a[i][2]) {
			cout << a[i][0] << "\n";
			return;
		}
		if (a[0][i] != '.' && a[0][i] == a[1][i] && a[1][i] == a[2][i]) {
			cout << a[0][i] << "\n";
			return;
		}
	}
	if (a[0][0] != '.' && a[0][0] == a[1][1] && a[1][1] == a[2][2]) {
		cout << a[0][0] << "\n";
		return;
	}
	if (a[0][2] != '.' && a[0][2] == a[1][1] && a[1][1] == a[2][0]) {
		cout << a[0][2] << "\n";
		return;
	}
	cout << "DRAW\n";
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