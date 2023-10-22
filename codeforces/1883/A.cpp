#include <bits/stdc++.h>
#define ll long long
#define sz(x) (int)(x.size())
using namespace std;

void solve() {
	int n, l = 1, ans = 4;
	cin >> n;
	for (int i = 1000; i > 0; i/=10) {
		if (n/i == 0) {
			ans += (10-(l));
			l = 10;
		}
		else {
			ans += abs(l-(n/i));
			l = (n/i);
		}
		n = n % i;
	}
	cout << ans << "\n";
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
