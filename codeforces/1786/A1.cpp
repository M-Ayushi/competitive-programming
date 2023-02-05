#include <bits/stdc++.h>
#define ll long long
#define sz(x) (int)(x.size())
using namespace std;

void solve() {
	int n;
	cin >> n;
	int a = 1, b = 0, x;
	--n;
	for (int i = 2; n; i += 2) {
		x = min(n, i+i+1);
		n -= x;
		if (i % 4) {
			b += x;
		}
		else {
			a += x;
		}
	}
	cout << a << " " << b << "\n";
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