#include <bits/stdc++.h>
#define ll long long
#define sz(x) (int)(x).size()
using namespace std;

void solve() {
	int n; //, g = 2, b = 1;
	ll h;
	cin >> n >> h;
	ll hx = h, hy = h, hz = h;
	ll cx = 0, cy = 0, cz = 0;
	int ansx = n, ansy = n, ansz = n;
	ll a[n];
	for (int i = 0; i < n; ++i) {
		cin >> a[i];
	}
	sort(a, a+n);

	// int ans = n;

	for (int i = 0; i < n; ++i) {
		if (hx <= a[i] && cx == 0) {
			hx = hx*2;
			++cx;
		}
		if (hx <= a[i] && cx == 1) {
			hx = hx*2;
			++cx;
		}
		if (hx <= a[i] && cx == 2) {
			hx = hx*3;
			++cx;
		}
		if (hx > a[i]) hx += (a[i]/2);
		else {
			hx = 1e8 +1;
			ansx = i;
		}

		if (hy <= a[i] && cy == 0) {
			hy = hy*2;
			++cy;
		}
		if (hy <= a[i] && cy == 1) {
			hy = hy*3;
			++cy;
		}
		if (hy <= a[i] && cy == 2) {
			hy = hy*2;
			++cy;
		}
		if (hy > a[i]) hy += (a[i]/2);
		else {
			hy = 1e8 +1;
			ansy = i;
		}

		if (hz <= a[i] && cz == 0) {
			hz = hz*3;
			++cz;
		}
		if (hz <= a[i] && cz == 1) {
			hz = hz*2;
			++cz;
		}
		if (hz <= a[i] && cz == 2) {
			hz = hz*2;
			++cz;
		}
		if (hz > a[i]) hz += (a[i]/2);
		else {
			hz = 1e8 +1;
			ansz = i;
		}


		// if (h > a[i]) h += (a[i]/2);
		// else {
		// 	if (g && h*2 > a[i]) {
		// 		h = h*2;
		// 		--g;
		// 		h += (a[i]/2);
		// 	}
		// 	else if (b && h*3 > a[i]) {
		// 		h = h*3;
		// 		--b;
		// 		h += (a[i]/2);
		// 	}
		// 	else if (b && g && h*6 > a[i]) {
		// 		h = h*6;
		// 		--g; 
		// 		--b;
		// 		h += (a[i]/2);
		// 	}
		// 	else if (b && g == 2 && h*12 > a[i]) {
		// 		h = h*12;
		// 		g = 0; 
		// 		--b;
		// 		h += (a[i]/2);
		// 	}
		// 	else {
		// 		ans = i;
		// 		break;
		// 	}
		// }
	}

	int ans = max(ansx, max(ansy, ansz));
	cout << ans << "\n";
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