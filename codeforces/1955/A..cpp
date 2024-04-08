#include <bits/stdc++.h>
#define ll long long
#define sz(x) (int)(x.size())
using namespace std;

void solve() {
	int n, a, b;
	cin >> n >> a >> b;
	int ans1 = b * (n/2) + (a * (n % 2));
	int ans2 = a * n;
	cout << min(ans1, ans2) << "\n";
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
