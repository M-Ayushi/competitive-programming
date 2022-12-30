#include <bits/stdc++.h>
#define ll long long
#define sz(x) (int)(x.size())
using namespace std;

void solve() {
	int n, o = 0, e = 0, x;
	cin >> n;
	ll a;
	map<ll, bool> pr;
	ll div[50][50];
	for (int i = 0; i < 50; ++i) {
		for (int j = 0; j < 50; ++j) {
			div[i][j] = 0;
		} 
	}
	string ans = "Yes\n";
	for (int i = 0; i < n; ++i) {
		cin >> a;
		if (a % 2) ++o;
		else ++e;

		if (pr[a]) ans = "No\n";
		pr[a] = 1;

		for(int j = 2; j < 50; ++j) {
			div[j][a%j]++;
		}
	}
	// if (e >= 2 && o >= 2) ans = "Yes\n";

	// for (int i = 2; i < 50; ++i) {
	// 	for (int j = 0; j < i; ++j) {
	// 		cout << div[i][j] << " ";
	// 	} 
	// 	cout << "\n";
	// }

	for (int i = 2; i < 50; ++i) {
		x = 0;
		for (int j = 0; j < i; ++j) {
			if (div[i][j] >= 2) ++x;
		}
		if (x == i) ans = "No\n";
	}

	cout << ans;
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