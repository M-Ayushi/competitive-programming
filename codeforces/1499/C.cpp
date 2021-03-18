#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
	int t;
	cin >> t;
	while (t--) {
		int n;
		cin >> n;
		ll a[n];
		for (int i = 0; i < n; i++) cin >> a[i];
		
		ll ans = (a[0]+a[1])*n;
		
		ll htot = a[0], hmin = a[0], vtot = a[1], vmin = a[1];
		ll hcost, vcost = a[1]*n;
		
		for (int i = 2; i < n; i++) {
			if (i % 2 == 0) {
				htot += a[i];
				hmin = min(hmin, a[i]);
				hcost = htot + (hmin * (n-((i+2)/2)));
			}
			else {
				vtot += a[i];
				vmin = min(vmin, a[i]);
				vcost = vtot + (vmin * (n-((i+2)/2)));
			}
			ans = min(ans, hcost+vcost);
		}
		cout << ans << "\n";
	}
	
    return 0;
}
