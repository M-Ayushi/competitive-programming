#include <bits/stdc++.h>
#define ll long long
#define sz(x) (int)(x.size())
using namespace std;

void solve() {
	int n, v;
	cin >> n >> v;
	int ans = min(v, n-1);
	int r = max(0, n-1-v);
	int c = (((r+1)*(r+2))/2) - (1);
	// cout << r << " " << c << " ";
	ans += c;
	cout << ans << "\n";

	return;
}

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	solve();
	
	return 0;
}