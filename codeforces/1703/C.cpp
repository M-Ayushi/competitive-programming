#include <bits/stdc++.h>
#define ll long long
#define sz(x) (int)(x).size()
using namespace std;

void solve() {
	int n;
	cin >> n;
	int a[n];
	for (int i = 0; i < n; ++i) {
		cin >> a[i];
	}

	int m, c, x;
	string s;
	for (int i = 0; i < n; ++i) {
		cin >> c >> s;
		m = 0;

		for (int j = 0; j < c; ++j) {
			if (s[j] == 'U') --m;
			else ++m;
		}

		x = a[i] + (m % 10);
		if (x < 0) x += 10;
		if (x >= 10) x -= 10;

		cout << x << " ";
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
