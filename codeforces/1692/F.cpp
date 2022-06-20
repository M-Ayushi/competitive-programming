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
		int d[10];
		for (int i = 0; i < 10; ++i) d[i] = 0;
		int n;
		cin >> n;
		int a;
		for (int i = 0; i < n; ++i) {
			cin >> a;
			d[a%10]++;
		}

		// for (auto x : d) cout << x << " ";
		// cout << "\n";

		int x, y; //, z;
		bool f = 0;
		for (int i = 0; i < 10 && !f; ++i) {
			if (d[i]) {
				for (int j = i; j < 10 && !f; ++j) {
					// cout << i << " ";
					if (d[j]) {
						// cout << i << " " << j << "\n";

						if ((i == j && d[i] > 1) || i != j) {

							x = i+j;
							// cout << x << "\n";

							if (x <= 3) y = 3-x;
							else if (x <= 13) y = 13-x;
							else y = 23-x;

							if (d[y]) {
								if (y == i && i == j) {
									if (d[y] > 2) f = 1;
								}
								else if (y == i || y == j) {
									if (d[y] > 1) f = 1;
								}	
								else f = 1;
							}
						}
					}
				}
			}
		}

		if (f) cout << "YES\n";
		else cout << "NO\n";
	}
	
    return 0;
}
