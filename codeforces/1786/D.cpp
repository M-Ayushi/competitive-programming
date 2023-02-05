#include <bits/stdc++.h>
#define ll long long
#define sz(x) (int)(x.size())
using namespace std;

void solve() {
	vector<string> wi, iw, ni, in, wn, nw;
	int p;
	cin >> p;
	string s;
	int w, i, n, o = 0;
	string k;
	for (int m = 1; m <= p; ++m) {
		k = to_string(m);
		cin >> s;
		w = 0, i = 0, n = 0;

		for (int j = 0; j < 3; ++j) {
			if (s[j] == 'w') ++w;
			else if (s[j] == 'i') ++i;
			else ++n;
		}

		if (w > 1) {
			if (i == 0) {
				wi.push_back(k);
				++o;
			}
			if (n == 0) {
				wn.push_back(k);
				++o;
			}
		}

		if (i > 1) {
			if (w == 0) {
				iw.push_back(k);
				++o;
			}
			if (n == 0) {
				in.push_back(k);
				++o;
			}
		}

		if (n > 1) {
			if (i == 0) {
				ni.push_back(k);
				++o;
			}
			if (w == 0) {
				nw.push_back(k);
				++o;
			}
		}
	}

	// cout << "Has i, wants n: " << sz(in) << "\n";
	// cout << "Has n, wants i: " << sz(ni) << "\n";
	// cout << "Has i, wants w: " << sz(iw) << "\n";
	// cout << "Has w, wants i: " << sz(wi) << "\n";
	// cout << "Has n, wants w: " << sz(nw) << "\n";
	// cout << "Has n, wants n: " << sz(wn) << "\n";


	vector<string> ans;
	string c;

	while (o) {
		while (sz(iw) && sz(wi)) {
			c = iw.back() + " i " + wi.back() + " w";
			// cout << c << "\n";
			iw.pop_back();
			wi.pop_back();
			ans.push_back(c);
			o -= 2;
		}

		while (sz(in) && sz(ni)) {
			c = in.back() + " i " + ni.back() + " n";
			// cout << c << "\n";
			in.pop_back();
			ni.pop_back();
			ans.push_back(c);
			o -= 2;
		}

		while (sz(wn) && sz(nw)) {
			c = wn.back() + " w " + nw.back() + " n";
			// cout << c << "\n";
			wn.pop_back();
			nw.pop_back();
			ans.push_back(c);
			o -= 2;
		}

		while (sz(wi) && sz(in) && sz(nw)) {
			c = wi.back() + " w " + in.back() + " i";
			ans.push_back(c);
			c = in.back() + " w " + nw.back() + " n";
			ans.push_back(c);
			// cout << c << "\n";
			wi.pop_back();
			in.pop_back();
			nw.pop_back();
			o -= 3;
		}

		while (sz(iw) && sz(ni) && sz(wn)) {
			c = iw.back() + " i " + wn.back() + " w";
			ans.push_back(c);
			c = ni.back() + " n " + wn.back() + " i";
			ans.push_back(c);
			// cout << c << "\n";
			iw.pop_back();
			wn.pop_back();
			ni.pop_back();
			o -= 3;
		}
	}
	
	cout << sz(ans) << "\n";
	for (auto z : ans) cout << z << "\n";
	// cout << "\n";
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
