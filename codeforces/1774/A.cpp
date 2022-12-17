#include <bits/stdc++.h>
#define ll long long
#define sz(x) (int)(x.size())
using namespace std;

void solve() {
	int n;
	cin >> n;
	string s;
	cin >> s;
	bool o = (s[0] == '1');
	for (int i = 1; i < n; ++i) {
		if (s[i] == '1') {
			if (o) cout << "-";
			else cout << "+";
			o = !o;
		}
		else cout << "+";
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