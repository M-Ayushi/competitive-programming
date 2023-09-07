#include <bits/stdc++.h>
#define ll long long
#define sz(x) (int)(x.size())
using namespace std;

void solve() {
	int n, o = 0, z = 0, q, t, l, r;
	cin >> n;
	int a[n], b[n+1];
	b[0] = 0;
	for (int i = 0; i < n; ++i) {
		cin >> a[i];
		b[i+1] = b[i] ^ a[i];
	}
	string s;
	cin >> s;
	for (int i = 0; i < n; ++i) {
		if (s[i] == '1') o = o ^ a[i];
		else z = z ^ a[i];
	}
	cin >> q;
	for (int i = 0; i < q; ++i) {
		cin >> t >> l;
		if (t == 1) {
			cin >> r;
			o = o ^ b[l-1] ^ b[r];
			z = z ^ b[l-1] ^ b[r];
		}
		else {
			if (l == 1) cout << o << " ";
			else cout << z << " ";
		}
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
