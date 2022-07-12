#include <bits/stdc++.h>
#define ll long long
#define sz(x) (int)(x).size()
using namespace std;

void solve() {
	string s;
	cin >> s;

	if ((s[0] == 'Y' || s[0] == 'y') && 
		(s[1] == 'E' || s[1] == 'e') && 
		(s[2] == 'S' || s[2] == 's')) cout << "YES\n";
	else cout << "NO\n";

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
