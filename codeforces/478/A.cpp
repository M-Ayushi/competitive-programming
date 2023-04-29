#include <bits/stdc++.h>
#define ll long long
#define sz(x) (int)(x.size())
using namespace std;

void solve() {
	int n;
	n = 5;
	int a, s = 0;
	for (int i = 0; i < n; ++i) {
		cin >> a;
		s += a;
	}
	if (s % n == 0 && s > 0) cout << (s/n) << "\n";
	else cout << "-1\n";
	return;
}

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	solve();
	
	return 0;
}