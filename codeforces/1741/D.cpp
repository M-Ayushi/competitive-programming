#include <bits/stdc++.h>
#define ll long long
#define sz(x) (int)(x).size()
using namespace std;

int mx[524290], mn[524290];

void update(int x) {
	mn[x] = min(mn[(x*2)+1], mn[(x*2)+2]);
	mx[x] = max(mx[(x*2)+1], mx[(x*2)+2]);
	if (x) update((x-1)/2);
}

void init(int a[], int l, int r, int x) {
	// cout << x << " " << l << " " << r << "\n";
	if (l == r) {
		mx[x] = a[l];
		mn[x] = a[l];
		update((x-1)/2);
	}
	else {
		int m = (l+r)/2;
		init(a, l, m, (x*2)+1);
		init(a, m+1, r, (x*2)+2);
	}
}

int check(int x, int l, int r) {
	if (l == r) return 0;

	int m = (l+r)/2;
	int a = check((x*2)+1, l, m);
	int b = check((x*2)+2, m+1, r);
	if (a == -1 || b == -1) return -1;
	else {
		if (mx[x]-mn[x] != r-l) return -1;
		else {
			if (mx[(x*2)+1] > mx[(x*2)+2]) return a+b+1;
			else return a+b;
		}
	}
}

void solve() {
	int n;
	cin >> n;

	for (int i = 0; i <= n*2; ++i) {
		mx[i] = 0;
		mn[i] = n+1;
	}

	int a[n];
	for (int i = 0; i < n; ++i) {
		cin >> a[i];
	}
	init(a, 0, n-1, 0);
	// for (int i = 0; i < n*2; ++i) {
	// 	cout << i << " : " << mn[i] << " " << mx[i] << "\n";
	// }
	int ans = check(0, 0, n-1);
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