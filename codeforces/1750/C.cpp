#include <bits/stdc++.h>
#define ll long long
#define sz(x) (int)(x).size()
using namespace std;

void solve() {
	int n;
	cin >> n;
	string a, b;
	cin >> a >> b;
	vector<int> o;
	int s = 0, d = 0;
	for (int i = 0; i < n; ++i) {
		if (a[i] == b[i]) ++s;
		else ++d;

		if (a[i] == '1') {
			o.push_back(i+1);
			// cout << (i+1) << " ";
		}
	}
	// cout << "\n";
	// return;
	int m = sz(o);
	if (s == n) {
		cout << "YES\n";
		if (m % 2) {
			cout << m+3 << "\n";
			for (int i = 0; i < m; ++i) {
				cout << o[i] << " " << o[i] << "\n";
			}
			cout << "1 " << n << "\n";
			cout << "1 1\n";
			cout << "2 " << n << "\n";  
		}
		else {
			cout << m << "\n";
			for (int i = 0; i < m; ++i) {
				cout << o[i] << " " <<  o[i] << "\n";
			}
		}
	}
	else if (d == n) {
		cout << "YES\n";
		if (m % 2) {
			cout << m << "\n";
			for (int i = 0; i < m; ++i) {
				cout << o[i] << " " <<  o[i] << "\n";
			}
			 
		}
		else {
			cout << m+3 << "\n";
			for (int i = 0; i < m; ++i) {
				cout << o[i] << " " <<  o[i] << "\n";
			}
			cout << "1 " << n << "\n";
			cout << "1 1\n";
			cout << "2 " << n << "\n"; 
		}
	}
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