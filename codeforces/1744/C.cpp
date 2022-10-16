#include <bits/stdc++.h>
#define ll long long
#define sz(x) (int)(x).size()
using namespace std;

void solve() {
	int n;
	cin >> n;
	char c;
	cin >> c;
	string s;
	cin >> s;
	if (c == 'g') {
		cout << "0\n";
		return;
	}
	int a = -1, x = -1, y = -1, ans = 0;
	for (int i = 0; i < n; ++i) {
		//cout << x << " " << y << "\n";
		if (s[i] == c && y >= x) {
			x = i;
		}
		else if (s[i] == 'g' && x >= y) {
			y = i;
			if (a == -1) a = i;

			if (x != -1) ans = max(ans, y-x);
		}
	}
	if (x > y) {
		// cout << x << " " << a << "\n";
		// cout << (n-x) << " " << a << " ";
		ans = max(ans, ((n-x)+a));
	}
	cout << ans << "\n";
	//cout << "\n";
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