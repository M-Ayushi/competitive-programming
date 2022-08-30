#include <bits/stdc++.h>
#define ll long long
#define sz(x) (int)(x).size()
using namespace std;

void solve() {
	int n;
	cin >> n;
	string s; 
	cin >> s;
	sort(s.begin(), s.end());
	//cout << s;
	if (n == 5) {
		if (s[0] == 'T' && s[1] == 'i' &&
			s[2] == 'm' && s[3] == 'r' &&
			s[4] == 'u') {
			cout << "YES\n";
			return;
		}
	}
	cout << "NO\n";
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