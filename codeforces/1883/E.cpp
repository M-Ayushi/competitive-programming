#include <bits/stdc++.h>
#define ll long long
#define sz(x) (int)(x.size())
using namespace std;

void solve() {
	int n;
	cin >> n;
	// bool o;
	ll a, b, l = 1, ans = 0, cur = 0, c;
	for (int i = 0; i < n; ++i) {
		cin >> a;
		b = a, c = 0;
		// o = 0;
		while (b/2 >= l) {
			// if (b % 2) o = 1;
			b /= 2;
			--c;
		}
		// if ()
		while (b < l) {
			b *= 2;
			++c;
		}
		cur = max((ll)0, cur+c);
		ans += cur;
		// cout << c << " " << cur << "\n";
		l = a;
	}
	// cout << "\n";
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
