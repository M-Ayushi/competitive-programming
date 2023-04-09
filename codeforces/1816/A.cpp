#include <bits/stdc++.h>
#define ll long long
#define sz(x) (int)(x.size())
using namespace std;

void solve() {
	ll x, y;
	cin >> x >> y;
	cout << "2\n";
	cout << "1 " << (y-1) << "\n";
	cout << x << " " << y << "\n"; 
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