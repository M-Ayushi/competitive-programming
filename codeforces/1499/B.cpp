#include <bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin >> t;
	while (t--) {
		string a;
		cin >> a;
		
		bool d = false;
		bool ans = true;
		int n = a.size();
		for (int i = 1; i < n; i++) {
			if (a[i-1] == a[i]) {
				if (a[i] == '1') {
					d = true;
				}
				else {
					if (d) {
						ans = false;
						break;
					}
				}
			}	
		}
		if (ans) cout << "YES \n";
		else cout << "NO \n";
	}
	
    return 0;
}
