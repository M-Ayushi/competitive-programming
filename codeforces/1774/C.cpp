#include <bits/stdc++.h>
#define ll long long
#define sz(x) (int)(x.size())
using namespace std;

void solve() {
	int n, z = 0, o = 0;;
	cin >> n;
	string s;
	cin >> s;
	for (int i = 2; i <= n; ++i) {
		if (s[i-2] == '0') {
			++z;
			o = 0;
		}
		else {
			++o;
			z = 0;
		}

		cout << (i-max(z, o)) << " ";

		// if (z + o == 2) cout << (i-1) << " ";
		// else cout << "1 ";
	}
	cout << "\n";
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