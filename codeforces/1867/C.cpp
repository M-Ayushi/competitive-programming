#include <bits/stdc++.h>
#define ll long long
#define sz(x) (int)(x.size())
using namespace std;

void solve() {
	int n, a, r = -1;
	cin >> n;
	// vector<bool> p;
	for (int i = 0; i < n; ++i) {
		cin >> a;
		if (a != i && r == -1) r = i;
		// cout << a << " " << m << " " << c << "\n";

		// if (a != c) {
		// 	if (m == 0) {
		// 		r = c;
		// 		// p.push_back(0);
		// 		++c; 
		// 	}
		// 	++m;
		// }

		// if (a == c && m < 2) {
		// 	// p.push_back(1);
		// 	++c;
		// }
	}
	if (r == -1) {
		r = n;
		// p.push_back(0);
	}
	// cout << " - > " << r << "\n";

	while (r >= 0) {
		cout << r << "\n";
		cin >> r;
	}
	// int l = c;
	// a = n;
	// for (int i = c-1; i >= 0; --i) {
	// 	if (p[i] == 0) {
	// 		cout << i << "\n";
	// 		if (l >)
	// 	}
	// 	else --c;
	// }
	return;
}

int main() {
	// ios_base::sync_with_stdio(0);
	// cin.tie(0);
	int t;
	cin >> t;
	while (t--) solve();
	
	return 0;
}
