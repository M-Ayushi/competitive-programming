#include <bits/stdc++.h>
#define ll long long
#define sz(x) (int)(x).size()
using namespace std;
 
int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int t;
	cin >> t;
	while (t--) {
		int n, m = 1e9;
		cin >> n;
		int a[n];
		//int x = 1e9, y = 1e9;
		for (int i = 0; i < n; ++i) {
			cin >> a[i];
			m = min(m, a[i]);
			// if (i % 2) y = min(y, a[i]);
			// else x = min(x, a[i]);
		}

		if (n % 2) cout << "Mike\n";
		else {
			for (int i = 0; i < n; i+=2) {
				if (a[i] == m) {
					cout << "Joe\n";
					break;
				}
				else if (a[i+1] == m) {
					cout << "Mike\n";
					break;
				}
			}
			// if (y < x) cout << "Mike\n";
			// else cout << "Joe\n";
		}
	}
	
    return 0;
}
