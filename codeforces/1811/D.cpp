#include <bits/stdc++.h>
#define ll long long
#define sz(x) (int)(x.size())
using namespace std;

const int N = 46;
ll fib[N];

ll calc(int n) {
	if (fib[n] == 0) {
		fib[n] = calc(n-1) + calc(n-2);
	}

	return fib[n];
}

void solve() {
	int n;
	ll x, y;
	cin >> n >> x >> y;
	ll a = calc(n);
	ll b = calc(n+1);

	int m = n;
	ll h = a, w = b; 
	while (m) {
		if (y > (w-h)) {
			y = w-y+1;
		}
		w-=h;
		swap(x, y);
		swap(h, w);
		--m;
	}
	// cout << x << " " << y << "\n";
	// ll d = min(x-1, a-x);
	// ll e = min(y-1, b-y);
	// cout << d << " " << e << "\n";
	if (x == 1 && y == 1) {
		cout << "YES\n";
	}
	else cout << "NO\n";
	// cout << a << " " << b << "\n";
	return;
}

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	fib[0] = 1;
	fib[1] = 1;

	int t;
	cin >> t;
	while (t--) solve();
	
	return 0;
}