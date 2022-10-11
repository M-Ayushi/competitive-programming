#include <bits/stdc++.h>
#define ll long long
#define sz(x) (int)(x).size()
using namespace std; 

void solve() {
	string a, b;
	cin >> a >> b;
	if (a[sz(a)-1] > b[sz(b)-1]) {
		cout << "<\n";
	}
	else if (a[sz(a)-1] < b[sz(b)-1]) {
		cout << ">\n";
	}
	else {
		if (a[sz(a)-1] == 'M') cout << "=\n";
		else if (a[sz(a)-1] == 'S') {
			if (sz(a) > sz(b)) cout << "<\n";
			else if (sz(a) < sz(b)) cout << ">\n";
			else cout << "=\n";
		}
		else {
			if (sz(a) > sz(b)) cout << ">\n";
			else if (sz(a) < sz(b)) cout << "<\n";
			else cout << "=\n";
		}

	}
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