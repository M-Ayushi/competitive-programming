#include <bits/stdc++.h>
#define ll long long
#define sz(x) (int)(x.size())
using namespace std;

void solve() {
	int n, k;
	cin >> n >> k;
	int f, t, a, m = -1e9;
	for (int i = 0; i < n; ++i) {
		cin >> f >> t;
		a = f-max(0, t-k);
		m = max(m, a);
	}
	cout << m << "\n";
	return;
}

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	solve();
	
	return 0;
}