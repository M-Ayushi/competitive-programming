#include <bits/stdc++.h>
#define ll long long
#define sz(x) (int)(x).size()
using namespace std;

void solve() {
	int n, k;
	cin >> n >> k;
	//int a[n];
	string s[n], a;
	map<string, bool> c;
	ll p[n];
	for (int i = 0; i < n; ++i) {
		s[i] = "";
		p[i] = 0;
		for (int j = 0; j < k; ++j) {
			cin >> a;
			//cout << a << "\n";
			s[i].append(a);
		}
		c[s[i]] = 1;
		//cout << s << "\n";
	}

	string z;
	char d;
	for (int i = 0; i < n; ++i) {
		for (int j = i+1; j < n; ++j) {
			z = "";
			for (int l = 0; l < k; ++l) {
				if (s[i][l] == s[j][l]) z.push_back(s[i][l]);
				else {
					if ((s[i][l] == '0' && s[j][l] == '1') || 
						(s[i][l] == '1' && s[j][l] == '0')) {
						d = '2';
					}
					else if ((s[i][l] == '0' && s[j][l] == '2') || 
						(s[i][l] == '2' && s[j][l] == '0')) {
						d = '1';
					}
					else {
						d = '0';
					}
					//d = (char)(3-((s[i][l]-'0')+(s[j][l]-'0')));
					//cout << "d = " << d << "\n";
					z.push_back(d);
				}
			}
			//cout << z << "\n";
			if (c[z]) {
				p[i] += 1;
				p[j] += 1;
			}
		}
	}
	ll ans = 0, pp;
	for (int i = 0; i < n; ++i) {
		pp = (p[i]*(p[i]-2))/8;
		//cout << p[i] << " " << pp << "\n";
		ans += pp;
		//cout << (p[i]/2) << " ";
	}
	cout << ans << "\n";

	return;
}
 
int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	solve();
	
    return 0;
}