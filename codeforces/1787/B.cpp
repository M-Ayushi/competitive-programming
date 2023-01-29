#include <bits/stdc++.h>
#define ll long long
#define sz(x) (int)(x.size())
using namespace std;

vector<int> p;
vector<int> q;

void fact(int x) {
	// cout << x << " ";
	int c = 0;
	while (x % 2 == 0) {
		++c;
		x = x >> 1;
		// cout << x << " ";
	}
	if (c > 0) {
		p.push_back(2);
		q.push_back(c);
		c = 0;
	}
	for (int i = 3; i <= sqrt(x); i += 2) {
		if (x % i == 0) {
			c = 0;
			while (x % i == 0) {
				x = x/i;
				++c;
				// cout << x << " ";
			}
			p.push_back(i);
			q.push_back(c);
		}
	}
	if (x > 1) {
		p.push_back(x);
		q.push_back(1);
	}
	// cout << "\n";
}

void solve() {
	int n;
	cin >> n;
	while (sz(p)) p.pop_back();
	while (sz(q)) q.pop_back();
	fact(n);
	// for (auto z : p) cout << z << " ";
	// cout << "\n";
	// for (auto z : q) cout << z << " ";
	// cout << "\n";

	int m = sz(p);

	int ans = 0, a, b = 0;
	while (b != 32) {
		// cout << "here\n";
		a = 1, b = 32;
		for (int i = 0; i < m; ++i) {
			if (q[i] < b && q[i] != 0) {
				b = q[i];
			}
		}
		if (b == 32) break;
		for (int i = 0; i < m; ++i) {
			if (q[i] != 0) {
				a = a*p[i];
				q[i] -= b;
			}
		}
		// cout << a << " " << b << "\n";
		ans += a*b;
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