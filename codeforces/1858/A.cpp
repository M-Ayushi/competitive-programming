#include <bits/stdc++.h>
#define ll long long
#define sz(x) (int)(x.size())
using namespace std;

void solve() {
	int a, b, c;
	cin >> a >> b >> c;
	a += (c+1)/2;
	b += c/2;
	if (a > b) cout << "First\n";
	else cout << "Second\n";
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
