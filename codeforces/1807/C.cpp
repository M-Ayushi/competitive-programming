#include <bits/stdc++.h>
#define ll long long
#define sz(x) (int)(x.size())
using namespace std;

void solve() {
	int n;
	cin >> n;
	string s; 
	cin >> s;
	int o;
	for (int i = 0; i < 26; ++i) {
		o = -1;
		for (int j = 0; j < n; ++j) {
			if (s[j] - 'a' == i) {
				if (o == -1) o = j % 2;

				if (j % 2 != o) {
					cout << "NO\n";
					return;
				}
			}
		}
	} 
	cout << "YES\n";
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