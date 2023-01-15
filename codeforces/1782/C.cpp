#include <bits/stdc++.h>
#define ll long long
#define sz(x) (int)(x.size())
using namespace std;

void solve() {
	int n, z;
	cin >> n;
	string s;
	cin >> s;
	vector<int> a(26, 0);
	vector<int> b(26, 0);	
	for (int i = 0; i < n; ++i) {
		a[s[i]-'a']++;
		b[s[i]-'a']++;
	}
	sort(b.begin(), b.end());
	// for (auto x : a) cout << x << " ";
	// cout << "\n";
	// for (auto x : b) cout << x << " ";
	// cout << "\n";
	int ans = 1, m = n*2, c;
	for (int i = 1; i <= 26; ++i) {
		if (n % i) continue;
		c = 0, z = 0;
		for (int j = 25; j >= 26-i; --j) {
			z += b[j];
			c += abs(b[j]-(n/i));
		}
		// cout << c << " " << z << "\n";
		c += n-z;
		// cout << i << " " << c << "\n";
		if (c <= m) {
			m = c;
			ans = i;
		}
	}

	// cout << ans << "\n";

	int d = 0;
	vector<int> l;
	for (int i = 25; i >= 26-ans; --i) {
		if (b[i] == b[26-ans]) ++d;
	}
	// cout << d << "\n";

	for (int i = 0; i < 26; ++i) {
		if (a[i] > b[26-ans]) {
			l.push_back(a[i]);
		}
		else if (a[i] == b[26-ans] && d) {
			--d;
			l.push_back(a[i]);
		}
		else {
			l.push_back(-1);
		}
	}
	
	// if (m == n*2) {
	// 	m -= (2*b[25]);
	// }

	cout << m/2 << "\n";

	for (int i = 0; i < n; ++i) {

		// for (auto x : l) cout << x << " ";
		// cout << "\n\n";

		if (l[s[i]-'a'] == -1 || l[s[i]-'a'] > n/ans) {
			for (int j = 0; j < 26; ++j) {
				if (l[j] != -1 && l[j] < n/ans) {
					++l[j];
					l[s[i]-'a'] = max(-1, l[s[i]-'a']-1);
					cout << (char)('a'+j);
					break;
				}
			}
		} 
		else cout << (char)(s[i]);
	}

	// cout << ans << " " << (m/2) << "\n";
	cout << "\n";
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