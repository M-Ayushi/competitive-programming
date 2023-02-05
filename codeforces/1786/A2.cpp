#include <bits/stdc++.h>
#define ll long long
#define sz(x) (int)(x.size())
using namespace std;

void solve() {
	int n;
	cin >> n;
	int aw = 1, ab = 0, bw = 0, bb = 0, x, y;
	--n;
	for (int i = 2; n; i += 2) {
		x = min(n, i+i+1);
		y = x/2;
		n -= x;
		if (i % 4) {
			bw += y;
			bb += y + (x % 2);
		}
		else {
			aw += y + (x % 2);
			ab += y;
		}
	}
	cout << aw << " " << ab << " " << bw << " " << bb << "\n";
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