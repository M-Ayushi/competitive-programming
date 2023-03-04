#include <bits/stdc++.h>
#define ll long long
#define sz(x) (int)(x.size())
using namespace std;

void solve() {
	int n;
	cin >> n;
	string s, m1 = "-1", m2, a, p = "YES\n";
	for (int i = 0; i < (n-1)*2; ++i) {
		cin >> s;
		if (sz(s) == n-1) {
			if (m1 == "-1") m1 = s;
			else m2 = s;
		}
	}

	if (n == 2) {
		if (m1 == m2) cout << "Yes\n";
		else cout << "No\n";
	}
	else {
		bool l = 1;
		for (int i = 1; i < n-1; ++i) {
			if (m1[i] != m2[i-1]) l = 0;
		}

		if (l) a = m1[0] + m2;
		else a = m2[0] + m1;
		// cout << a << "\n";

		for (int i = 0; i < n/2; ++i) {
			if (a[i] != a[n-1-i]) p = "No\n";
		}
		cout << p;
	}

	// string a = m1[0] + m2;
	// string b = m2[0] + m1;
	// cout << m1 << " " << m2 << "\n";
	// cout << a << " " << b << "\n"; 

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