#include <bits/stdc++.h>

using namespace std;

int main() 
{
	int t;
	cin >> t;
	while(t--) {
		int n, m , k; cin >> n >> m >> k;
		int a[500][500];
		vector<int> v(n*m);
		
		int h = 0;
		for(int i = 0 ; i < n ; i++) {
			for(int j = 0 ; j < m ; j++) cin >> a[i][j];
		}
		
		int h1 = 0, h2 = n - 1, c1 = 0, c2 = m - 1;
		while(h1 <= h2 && c1 <= c2) {
			for(int i = c1 ; i <= c2 ; i++) {
//				cout << a[h1][i] << " ";
			v[h++] = a[h1][i];
			}
			++h1;
			for(int i = h1; i <= h2; i ++) {
//				cout << a[i][c2] << " ";
				v[h++] = a[i][c2];
			}
			--c2;
			if(h1 <= h2) {
				for(int i = c2; i >= c1 ; i--) {
//					cout << a[h2][i] << " ";
					v[h++] = a[h2][i];
				}
				--h2;
			}
			if(c1 <= c2) {
				for(int i = h2 ; i >= h1 ; i--) {
//					cout << a[i][c1] << " ";
					v[h++] = a[i][c1];
				}
				++c1;
			}
		}
		if(k <= m*n) {
			cout << v[k-1];
		}
		
		cout << endl;
	}
	return 0;
}

