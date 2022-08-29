#include <bits/stdc++.h>
#define ll long long
#define sz(x) (int)(x).size()
using namespace std;

void solve() {
	int n, v, ans = 0;
	cin >> n;
	int a[n+1];
	a[0] = 0;
	for (int i = 1; i <= n; ++i) {
		cin >> a[i];
	}
	string s;
	for (int i = 0; i <= n; ++i) {
		getline(cin, s);
		v = 0;
		//cout << i << " " << s << "\n";
		for (auto c : s) {
			if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' || c == 'y') {
				++v;
			}
		}
		//cout << v << "\n";
		if (v == a[i]) ++ans;
	}

	if (ans == n+1) cout << "YES\n";
	else cout << "NO\n";
	return;
}
 
int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	solve();
	
    return 0;
}