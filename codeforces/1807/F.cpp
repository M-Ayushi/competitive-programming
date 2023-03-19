#include <bits/stdc++.h>
#define ll long long
#define sz(x) (int)(x.size())
using namespace std;

// const int N = 250;
// bool v[N][N][4];

// void printArr(int n, int m) {
// 	int z;
// 	for (int i = 0; i < n; ++i) {
// 		for (int j = 0; j < m; ++j) {
// 			z = 0;
// 			for (int k = 0; k < 4; ++k) {
// 				z += v[i][j][k];
// 			}
// 			cout << z << " ";
// 		}
// 		cout << "\n";
// 	}
// }

void solve() {
	int n, m, x, y, f, g, a, b;
	cin >> n >> m >> x >> y >> f >> g;

	--x;
	--y;
	--f;
	--g;

	string d;
	cin >> d;

	if (d == "DR") {
		a = 1;
		b = 1;
	}
	else if (d == "DL") {
		a = 1;
		b = -1;
	}
	else if (d == "UR") {
		a = -1;
		b = 1;
	}
	else {
		a = -1;
		b = -1;
	}
	bool v[n][m][4];
	for (int i = 0; i < n; ++i) {
		for (int j = 0; j < m; ++j) {
			for (int k = 0; k < 4; ++k) {
				v[i][j][k] = 0;
			}
		}
	}

	int s = 0;
	while (x != f || y != g) {
		// cout << (x+1) << " " << (y+1) << "\n";
		// printArr(n, m);
		// cout << a << " " << b << "\n\n";
		// ++s;
		// if ((x+a == 0 && y == 0) || (x == 0 && y == m-1) ||
		// 	(x == n-1 && y == 0) || (x == n-1 && y == m-1)) {
		// 	a = a * -1;
		// 	b = b * -1;
		// }
		// else if (x == 0 || x == n-1) {
		// 	a = a*-1;
		// } 
		// else if (y == 0 || y == m-1) {
		// 	b = b*-1;
		// }
		if ((x + a < 0 || x + a == n) && (y + b < 0 || y + b == m)) {
			a = a * -1;
			b = b * -1;
			++s;
		}
		else if (x + a < 0 || x + a == n) {
			a = a*-1;
			++s;
		}
		else if (y + b < 0 || y + b == m) {
			b = b*-1;
			++s;
		}

		x += a;
		y += b;

		// if (v[x][y][])

		if (a == 1 && b == 1) {
			if (v[x][y][0]) {
				s = -1;
				// cout << "HERE1\n"; 
				break;
			}
			v[x][y][0] = 1;
		}
		else if (a == 1 && b == -1) {
			if (v[x][y][1]) {
				s = -1;
				// cout << "HERE2\n"; 
				break;
			}
			v[x][y][1] = 1;
		}
		else if (a == -1 && b == 1) {
			if (v[x][y][2]) {
				s = -1;
				// cout << "HERE3\n"; 
				break;
			}
			v[x][y][2] = 1;
		}
		else {
			if (v[x][y][3]) {
				s = -1;
				// cout << "HERE4\n"; 
				break;
			}
			v[x][y][3] = 1;
		}

	}
	// if (x == f && y == g) cout << s << "\n";
	// else {
	// 	cout << "-1\n";
	// }
	cout << s << "\n";
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