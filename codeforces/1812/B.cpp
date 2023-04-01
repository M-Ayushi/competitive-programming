#include <bits/stdc++.h>
#define ll long long
#define sz(x) (int)(x.size())
using namespace std;

void solve() {
	int n;
	cin >> n;
	// if (n % 5) cout << "YES\n";
	// else cout << "NO\n";
	if (n == 15 || n == 20 || n == 21) cout << "NO\n";
	else if (n <= 14 || (n >= 16 && n < 20) || n >= 22) cout << "YES\n";
	// else if (n > 20) {
	// 	while (n < 1e11) {

	// 	}
	// }
	else cout << "NO\n";
	return;
}

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	solve();
	
	return 0;
}