#include <bits/stdc++.h>
#define ll long long
#define sz(x) (int)(x.size())
using namespace std;

void solve() {
	int w, d, h, a, b, f, g;
	cin >> w >> d >> h >> a >> b >> f >> g;
	int ans = h;
	int x = abs(a-f) + min(b+g, (d-b)+(d-g));
	int y = abs(b-g) + min(a+f, (w-a)+(w-f));
	ans += min(x, y);
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