#include <bits/stdc++.h>
#define ll long long
#define sz(x) (int)(x).size()
using namespace std;

bool isPal(int x, int y) {
	if (x / 10 == y % 10 && y / 10 == x % 10) return 1;
	return 0;
}
 
int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int t;
	cin >> t;
	while (t--) {
		string s;
		cin >> s;
		int x;
		cin >> x;
		
		int a = stoi(s.substr(0, 2));
		int b = stoi(s.substr(3, 2));
		// cout << (h+m) << "\n";

		int h = a, m = b;
		int ans = 0;
		do {
			ans += isPal(h, m);

			m += x;
			h += m / 60;
			m = m % 60;
			h = h % 24;
		} while (!(h == a && m == b));

		cout << ans << "\n";
	}
	
    return 0;
}
