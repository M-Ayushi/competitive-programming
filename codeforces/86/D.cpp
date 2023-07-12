#include <bits/stdc++.h>
#define ll long long
#define sz(x) (int)(x.size())
using namespace std;

const int M = 448; //, N = 2e5+1;
const int N = 1e6+1;

void solve() {
	int n, q, l, r, cl = 0, cr = 0, z;
	cin >> n >> q;
	ll ans[q]; 
	int a[n];
	vector<vector<array<int, 3>>> v(M);
	vector<int> count(N, 0);
	for (int i = 0; i < n; ++i) {
		cin >> a[i];
	}
	ll cur = a[0];
	count[a[0]]++;
	for (int i = 0; i < q; ++i) {
		cin >> l >> r;
		v[(l-1)/M].push_back({r-1, l-1, i});
	} 
	for (int i = 0; i < M; ++i) {
		if (i*M > n) break;

		z = (i*M);
		if (cl < z) {
			for (int k = cl; k < z; ++k) {
				cur -= (1LL * count[a[k]]*count[a[k]]*a[k]);
				count[a[k]]--;
				cur += (1LL * count[a[k]]*count[a[k]]*a[k]);
			}
		}
		cl = z;

		if (cr < z) {
			for (int k = cr+1; k <= z; ++k) {
				cur -= (1LL * count[a[k]]*count[a[k]]*a[k]);
				count[a[k]]++;
				cur += (1LL * count[a[k]]*count[a[k]]*a[k]);
			}
		}
		if (cr > z) {
			for (int k = cr; k > z; --k) {
				cur -= (1LL * count[a[k]]*count[a[k]]*a[k]);
				count[a[k]]--;
				cur += (1LL * count[a[k]]*count[a[k]]*a[k]);
			}
		}
		cr = z;

		sort(v[i].begin(), v[i].end());
		for (auto j : v[i]) {
			if (cl < j[1]) {
				for (int k = cl; k < j[1]; ++k) {
					cur -= (1LL * count[a[k]]*count[a[k]]*a[k]);
					count[a[k]]--;
					cur += (1LL * count[a[k]]*count[a[k]]*a[k]);
				}
			}
			if (cl > j[1]) {
				for (int k = cl-1; k >= j[1]; --k) {
					// cout << k << " " << a[k] << " " << count[a[k]] << "\n"; 
					cur -= (1LL * count[a[k]]*count[a[k]]*a[k]);
					count[a[k]]++;
					cur += (1LL * count[a[k]]*count[a[k]]*a[k]);
				}
			}
			cl = j[1];

			if (cr < j[0]) {
				for (int k = cr+1; k <= j[0]; ++k) {
					// cout << k << " " << a[k] << " " << count[a[k]] << "\n"; 
					cur -= (1LL * count[a[k]]*count[a[k]]*a[k]);
					count[a[k]]++;
					cur += (1LL * count[a[k]]*count[a[k]]*a[k]);
				}
			}
			if (cr > j[0]) {
				for (int k = cr; k > j[0]; --k) {
					// cout << k << " " << a[k] << " " << count[a[k]] << "\n"; 
					cur -= (1LL * count[a[k]]*count[a[k]]*a[k]);
					count[a[k]]--;
					cur += (1LL * count[a[k]]*count[a[k]]*a[k]);
				}
			}
			cr = j[0];

			ans[j[2]] = cur;
		}
	}

	for (auto x : ans) {
		cout << x << "\n";
	}
	return;
}

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	solve();
	
	return 0;
}
