#include <bits/stdc++.h>
#define ll long long
#define sz(x) (int)(x.size())
using namespace std;

const int N = 14;
ll seq[N];

ll fours(ll k) {
	ll e = 1e13, s = 0;
	for (int i = N-1; i >= 0; --i) {
		// cout << k << "\n";
		if (k >= e) {
			if ((k/e) > 4) {
				s += max(e-seq[i], (ll)1);
				// cout << "e: " << e << " ";
			}
			else if ((k/e) == 4) {
				s += (k%e)+1;
				k -= (k%e);
			}
			s += (seq[i] * (k/e));
			// cout << (seq[i] * (k/e)) << " ";
			k %= e;
		}
		e /= 10;
	}
	return s;
}

void solve() {
	ll m;
	cin >> m;

	// ll k = m;

	seq[0] = 0;
	ll e = 1;
	for (int i = 1; i < N; ++i) {
		seq[i] = (seq[i-1]*9) + e;
		e = e*10;
		// cout << seq[i] << " ";
	}
	// cout << "\n";

	// cout << 19279-fours(19279) << "\n";
	// cout << 18937-fours(18937) << "\n";
	// cout << fours(19279) << "\n";
	// cout << fours(18937) << "\n";

	// cout << 19279-fours(19279) << "\n";
	// cout << 18937-fours(18937) << "\n";
	// cout << fours(300) << "\n";
	// cout << fours(399) << "\n";
	// cout << fours(400) << "\n";
	// cout << fours(410) << "\n";
	// cout << fours(510) << "\n";
	// cout << fours(505) << "\n";

	// for (ll z = 498; z <= 505; ++z) {
	// 	cout << z << " : " << fours(z) << "\n";
	// }

	ll ans = m, p = 0, c; //, quit = 0;
	do {
		// cout << "ans: " << ans << "\n";
		c = fours(ans) - fours(p);
		// cout << "c: " << c << "\n";
		// cout << fours(ans) << " " << fours(p) << "\n";
		p = ans;
		ans += c;
		// ++quit;
	} while (ans > p);

	cout << ans << "\n";
	// cout << ": ";
	// cout << (m+s) << "\n";
	
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