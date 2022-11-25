#include <bits/stdc++.h>
#define ll long long
#define sz(x) (int)(x.size())
using namespace std;

void solve() {
	string s;
	cin >> s;
	cout << s;
	int n = sz(s);
	for (int i = n-1; i >= 0; --i) cout << s[i];
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