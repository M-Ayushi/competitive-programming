#include <bits/stdc++.h>
#define ll long long
#define sz(x) (int)(x.size())
using namespace std;

void solve() {
	int a, b, c;
	cin >> a >> b >> c;
	a = a*2, b = b*2, c = c*2;
	int e = (a+b)/2;
	int ans = abs(e-a)/c;
	if (abs(e-a) % c) ++ans;
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
