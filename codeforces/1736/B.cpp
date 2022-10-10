#include <bits/stdc++.h>
#define ll long long
#define sz(x) (int)(x).size()
using namespace std;

// int fgcd(int a, int b) {
// 	if (b == 0) return a;
// 	return gcd(b, a%b);
// }

int lcm(int a, int b) {
	return (a*b)/gcd(a,b);
}

void solve() {
	int n;
	cin >> n;
	int a[n];
	for (int i = 0; i < n; ++i) {
		cin >> a[i];
	}

	string ans = "YES\n";
	int x = a[0], y = a[0];
	// cout << x << " ";
	for (int i = 1; i < n; ++i) {
		y = lcm(a[i-1], a[i]);
		// if (y % a[i]) {
		// 	y = y*a[i];
			
		// }
		// cout << y << " ";

		if (gcd(x, y) > a[i-1]) {
			ans = "NO\n";
			break;
		}

		x = y;
		y = a[i];
		// if (gcd(a[i], a[i+1]) > 1 && a[i] < a[i+1]) {
		// 	ans = "NO\n";
		// 	break;
		// }
	}
	// cout << "\n";
	cout << ans;
	return;
}
 
int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int t;
	cin >> t;
	while (t--) solve();

	//cout << "\n";
	//cout << gcd(10, 5) << " " << gcd(17, 1) << " " << gcd(40, 28);
	
    return 0;
}