#include <bits/stdc++.h>
#define ll long long
#define sz(x) (int)(x).size()
using namespace std;
 
int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int n;
	cin >> n;
	
	bool p;
	vector<int> v;

	int x = 2;
	while (x <= n) {
		v.push_back(x);
		x = x<<1;
	}
	for (int i = 3; i <= n; i += 2) {
		p = 1;
		for (int j = 3; j <= sqrt(i); ++j) {
			if (i % j == 0) {
				p = 0;
				break;
			}
		}

		if (p) {
			x = i;
			while (x <= n) {
				v.push_back(x);
				x = x*i;
			}
		}
	}

	cout << sz(v) << "\n";
	for (auto z : v) cout << z << " ";
	cout << "\n"; 
	
    return 0;
}
