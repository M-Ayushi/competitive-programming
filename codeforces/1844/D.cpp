#include <bits/stdc++.h>
#define ll long long
#define sz(x) (int)(x.size())
using namespace std;

void solve() {
	int n, d = 26;
	cin >> n;
	for (int i = 2; i <= 26; ++i) {
		if (n % i) {
			d = i;
			break;
		}
	} 
	for (int i = 0; i < n; ++i) {
		cout << (char)('a'+(i%d));
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
