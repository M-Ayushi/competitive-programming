#include <bits/stdc++.h>
#define ll long long
#define sz(x) (int)(x.size())
using namespace std;

void solve() {
	int n, a, b;
	cin >> n >> a >> b;
	int ans = (a+b);
	ans += 200*n;
	ans = ans%n;
	if (ans == 0) ans = n;
	cout << ans << "\n";
	return;
}

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	solve();
	
	return 0;
}