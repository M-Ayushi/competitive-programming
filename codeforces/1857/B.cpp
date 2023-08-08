#include <bits/stdc++.h>
#define ll long long
#define sz(x) (int)(x.size())
using namespace std;

void solve() {
	string s;
	cin >> s;
	int n = sz(s);
	int p = -1, j;
	for (int i = 0; i < n; ++i) {
		if ((s[i]-'0') == 4) {
			j = i+1;
			while (((s[j]-'0') >= 4) && j < n) {
				if (((s[j]-'0') > 4)) {
					p = i;
					break;
				}
				++j;
			}
			i = j;
			if (p != -1) break;
		}
		else if ((s[i]-'0') >= 5) {
			p = i;
			break;
		}

		// if ((s[i]-'0') < 4) cout << s[i];
		// else if ((s[i]-'0') == 4) {

		// }
		// else {
		// 	cout << (int)((s[i]-'0'))
		// }
	}

	// cout << p << " ";

	if (p == -1) {
		cout << s << "\n";
		return;
	}

	for (int i = 0; i < p-1; ++i) {
		cout << s[i];
	} 
	if (p == 0) cout << "1";
	else cout << ((s[p-1]-'0') + 1);
	for (int i = p; i < n; ++i) cout << "0";
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
