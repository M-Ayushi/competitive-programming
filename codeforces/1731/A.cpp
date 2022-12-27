#include <bits/stdc++.h>
#define ll long long
#define sz(x) (int)(x.size())
using namespace std;

void solve() {
	ll n;
	cin >> n;
	ll a = 1, x;
	for (ll i = 0; i < n; ++i) {
		cin >> x;
		a *= x;
	}
	a += (n-1);
	a = a*2022;
	cout << a << "\n";
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