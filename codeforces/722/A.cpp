#include <bits/stdc++.h>
#define ll long long
#define sz(x) (int)(x).size()
using namespace std;

void solve() {
	int n;
	cin >> n;
	string s;
	cin >> s;
	
	if (n == 12) {
		if (s[0] > '1') {
			if (s[1] == '0') cout << "1";
			else cout << '0';
		}
		else if (s[0] == '1' && s[1] > '2') cout << "0";
		else if (s[0] == '0' && s[1] == '0') cout << "1";
		else cout << s[0];
	}
	else {
		if (s[0] > '2' || (s[0] == '2' && s[1] > '3')) {
			cout << "0";
		}
		else cout << s[0];
	}
	cout << s[1] << ":";

	if (s[3] > '5') {
		cout << "0";
	}
	else cout << s[3];
	cout << s[4] << "\n";

	return;
}
 
int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	solve();
	
    return 0;
}