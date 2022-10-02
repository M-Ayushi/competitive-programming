#include <bits/stdc++.h>
#define ll long long
#define sz(x) (int)(x).size()
using namespace std;

void solve() {
	int n, x, c, l;
	cin >> n;
	string s;
	cin >> s;
	int en[26], li[26];
	for (int i = 0; i < 26; ++i) {
		en[i] = -1;
		li[i] = -1;
	}
	//int a[n];
	for (int i = 0; i < n; ++i) {
		c = s[i]-'a';
		//cin >> a[i];
		if (en[c] == -1) {
			for (int i = 0; i < 26; ++i) {
				if (i != c && li[i] == -1) {
					x = i;
					l = 1;
					while (x != -1 && en[x] != c) {
						x = en[x];
						++l;
					}
					//cout  << l << "\n";
					if (x == -1 || l == 25) {
						en[c] = i;
						li[i] = c;
						break;
					}
					//else cout << "l = " << l << "\n";
				}
			}
		}
		cout << (char)('a'+en[c]);
	}
	cout << "\n";
	return;
}
 
int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int t;
	cin >> t;
	while (t--) solve();

	//cout << ('`'-'a');
	
    return 0;
}