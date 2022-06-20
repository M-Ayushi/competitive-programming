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
		string a[8];
		for (int i = 0; i < 8; ++i) {
			cin >> a[i];
		}

		bool x = 1;
		for (int i = 1; i < 7 && x; ++i) {
			for (int j = 1; j < 7 && x; ++j) {
				if (a[i][j] == '#' && 
					a[i-1][j-1] == '#' && 
					a[i-1][j+1] == '#' && 
					a[i+1][j-1] == '#' && 
					a[i+1][j-1] == '#') {
					cout << (i+1) << " " << (j+1) << "\n";
					x = 0;
				}
			}
		}
	}
	
    return 0;
}
