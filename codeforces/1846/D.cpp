#include <bits/stdc++.h>
#define ll long long
#define sz(x) (int)(x.size())
using namespace std;

void solve() {
	ll n, d, h;
	cin >> n >> d >> h;
	ll s, p = h * -1, o, ans = 0; // ans = n * d * h * h;
	for (int i = 0; i < n; ++i) {
		cin >> s;
		o = s - p;
		if (o < h) {
			ans += ((h*h) - ((h-o) * (h-o)));
			// ans -= (((h-o) * d) * (h-o));
			// cout << (((h-o) * d) * (h-o)) << "\n"; 
		}
		else ans += (h * h);
		p = s;
	}
	double acans = (double(ans))/((double)(h*2));
	acans *= d;
	cout << fixed << setprecision(7) << acans << "\n";
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