#include <bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin >> t;
	while (t--) {
		int n, m;
		cin >> n >> m;
		int a[m];
		int b;
		for (int i = 0; i < m; i++) a[i] = 0;
		for (int i = 0; i < n; ++i) {
			cin >> b;
			//cout << b%m << " ";
			++a[b%m];
		}
		//cout << "\n";
		
		//for (auto p : a) cout << p << " ";
		//cout << "\n";
		
		int ans = 0;
		//int z = m-1;
		int x, y;
		for (int i = 1; i < (m+1)/2; ++i) {
			//cout << i << "\n";
			x = a[i];
			y = a[m-i];
			
			if (x+y > 0) {
				if (x == y || abs(x-y) == 1) {
					++ans;
				}
				else {
					if (x > y) {
						x -= y;
						ans += x;
					}
					else {
						y -= x;
						ans += y;
					}
				}
			}
		}
		
		//cout << ans << "\n";
		
		if (a[0] > 0) ++ans;
		if (m % 2 == 0) {
			if (a[m/2] > 0) ++ans;
		}
		
		cout << ans << "\n";
	}
	
    return 0;
}
