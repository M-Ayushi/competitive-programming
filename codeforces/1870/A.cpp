#include <bits/stdc++.h>
#define ll long long
#define sz(x) (int)(x.size())
using namespace std;

void solve() {
	ll n, k, x;
	cin >> n >> k >> x;
	ll a = -1;
	if (min(n, x+1) >= k) {
		a = ((k-1)*k)/2;
		if (x == k) a += (k-1)*(n-k);
		else a += (x)*(n-k);
	}
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
