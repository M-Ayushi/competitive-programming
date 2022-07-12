#include <bits/stdc++.h>
#define ll long long
#define sz(x) (int)(x).size()
using namespace std;

void solve() {
	int n;
	cin >> n;
	string a[n];
	for (int i = 0; i < n; ++i) {
		cin >> a[i];
	}

	// int w, x, y, z;
	int c, ans = 0;
	for (int i = 0; i < n/2; ++i) {
		// cout << i << " : ";
		for (int j = 0; j < (n-i-i-1); ++j) {
			// cout << j << " ";

			c = 0;

			// cout << (i) << " " << (i+j) << "\n";
			// cout << ((n-1)-i) << " " << ((n-1)-i-j) << "\n";
			// cout << ((n-1)-i-j) << " " << (i) << "\n";
			// cout << (i+j) << " " << ((n-1)-i) << "\n\n";

			if (a[i][i+j] == '1') ++c;
			if (a[(n-1)-i][(n-1)-i-j] == '1') ++c;
			if (a[(n-1)-i-j][i] == '1') ++c;
			if (a[i+j][(n-1)-i] == '1') ++c;

			ans += min(c, 4-c);
		}
		// cout << "\n";
	}

	// int z, o, c, ans = 0; //, v = 0;
	// for (int i = 0; i < n/2; ++i) {
	// 	z = 0, o = 0, c = 0;
	// 	for (int j = i+1; j < (n-i)-1; ++j) {
	// 		// v += 4;
	// 		if (a[i][j] == '1') ++o;
	// 		// else ++z;

	// 		if (a[j][i] == '1') ++o;
	// 		// else ++z;

	// 		if (a[(n-1)-i][(n-1)-j] == '1') ++o;
	// 		// else ++z;

	// 		if (a[(n-1)-j][(n-1)-i] == '1') ++o;
	// 		// else ++z;


	// 	}
	// 	cout << z << " " << o << "\n";
	// 	ans += min(z, o);

	// 	if (a[i][i] == '1') ++c;

	// 	if (a[(n-1)-i][(n-1)-i] == '1') ++c;

	// 	if (a[(n-1)-i][i] == '1') ++c;

	// 	if (a[i][(n-1)-i] == '1') ++c;

	// 	ans += min(c, 4-c);

	// 	// v += 4;
	// }

	// cout << "v = " << v << "\n";
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
