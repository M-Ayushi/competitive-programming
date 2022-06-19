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
		int n;
		cin >> n;
		string s;
		cin >> s;

		int ansx[n];
		int x[n+1];
		int ansy[n];
		int y[n+1];

		for (int i = 0; i <= n; ++i) {
			x[i] = 0;
			y[i] = 1;
		}
		x[0] = 1;
		x[n] = 1;

		// for (auto ran : x) cout << ran;
		// cout << "\n";
		// for (auto ran : y) cout << ran;
		// cout << "\n";
		
		int cx = 0, cy = 0, m;
		for (int i = n-1; i >= 0; --i) {
			m = (int)(s[i]-'0');
			// cout << s[i] << " : " << m << "\n";

			if (cx) {
				x[i+1]--;
				cx = 0;
				if (x[i+1] == -1) {
					x[i+1] = 9;
					cx = 1;
				}
			}
			if (x[i+1] < m) {
				++cx;
				x[i+1] += 10;
			}
			// else cx = 0;
			ansx[i] = x[i+1] - m;

			if (cy) {
				y[i+1]--;
				cy = 0;
				if (y[i+1] == -1) {
					y[i+1] = 9;
					cy = 1;
				}
			}
			if (y[i+1] < m) {
				++cy;
				y[i+1] += 10;
			}
			// else cy = 0;
			ansy[i] = y[i+1] - m;

			// cout << "cx " << cx << "\n";
			// cout << "cy " << cy << "\n";
		}

		// ansx[0] = cx;
		// ansy[0] = cy;

		// cout << "options : ";
		// for (auto ran : ansx) cout << ran;
		// cout << " ";
		// for (auto ran : ansy) cout << ran;
		// cout << "\n";

		if (ansx[0]) {
			for (auto ran : ansx) cout << ran;
			
		}
		else {
			for (auto ran : ansy) cout << ran;
		}

		cout << "\n";
	}
	
    return 0;
}
