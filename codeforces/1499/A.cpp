#include <bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin >> t;
	while (t--) {
		int n, j, k;
		cin >> n >> j >> k;
		int w, b;
		cin >> w >> b;
		
		int x = min(j, k);
		int y = max(j, k);
		
		int c = x;
		c += (y-x)/2;
		
		int d = n-y;
		d += ((n-x)-(n-y))/2;
		
		if (c >= w && d >= b) cout << "YES \n";
		else cout << "NO \n";
	}
	
    return 0;
}
