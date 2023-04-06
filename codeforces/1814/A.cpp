#include <bits/stdc++.h>
#define ll long long
#define sz(x) (int)(x.size())
using namespace std;

void solve() {
	ll n, k;
	cin >> n >> k;

	if (n % 2 == 0) cout << "YES\n";
	else if (k % 2 && k <= n) cout << "YES\n";
	else cout << "NO\n";
	
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