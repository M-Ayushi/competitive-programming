#include <bits/stdc++.h>
#define ll long long
#define sz(x) (int)(x.size())
using namespace std;

void solve() {
	int n, l = 1, r;
	cin >> n;
	r = n*n;
	int a[n][n];
	for (int i = 0; i < n; ++i) {
		if (i % 2) {
			if (n % 2) {
				for (int j = 0; j < n; ++j) {
					if (j % 2) {
						a[i][n-1-j] = l;
						++l;
					}
					else {
						a[i][n-1-j] = r;
						--r;
					}
				} 
			}
			else {
				for (int j = 0; j < n; ++j) {
					if (j % 2) {
						a[i][n-1-j] = r;
						--r;
					}
					else {
						a[i][n-1-j] = l;
						++l;
					}
				} 
			}
		}
		else {
			for (int j = 0; j < n; ++j) {
				if (j % 2) {
					a[i][j] = r;
					--r;
				}
				else {
					a[i][j] = l;
					++l;
				}
			} 
		}
	}
	for (int i = 0; i < n; ++i) {
		for (int j = 0; j < n; ++j) {
			cout << a[i][j] << " ";
		}
		cout << "\n";
	}
	// std::vector<int> v;
	// for (int i = 1; i <= n; ++i) {
	// 	if (i % 2) {
	// 		for (int j = 1; j <= n; ++j) {
	// 			// cout << i << " " << j << " : " << l << " " << r << "\n";
			
	// 			if (j % 2) {
	// 				cout << l << " ";
	// 				++l;
	// 			}
	// 			else {
	// 				cout << r << " ";
	// 				--r;
	// 			}
	// 		}
	// 	}
	// 	else {
	// 		if (j % 2) {
	// 			cout << r << " ";
	// 			--r;
	// 		}
	// 		else {
	// 			cout << l << " ";
	// 			++l;
	// 		}
	// 	}
	// 	cout << "\n";
	// }
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