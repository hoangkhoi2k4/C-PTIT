#include <bits/stdc++.h>
using namespace std;

int n, m;
int a[100][100];
int dx[8] = {-1, -1, -1, 0, 0, 1, 1, 1};
int dy[8] = {-1, 0, 1, -1, 1, -1, 0, 1};

void find(int i, int j) {
    a[i][j] = 0;
    
    for (int k = 0; k < 8; k++) {
        int i1 = i + dx[k];
        int j1 = j + dy[k];
        
        if (i1 >= 0 && i1 < n && j1 >= 0 && j1 < m && a[i1][j1] == 1) {
            find(i1, j1);
        }
    }
}

int main() {
    int i;
    cin >> i;
    
    while (i--) {
        cin >> n >> m;
        
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                cin >> a[i][j];
            }
        }
        
        int dem = 0;
        
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                if (a[i][j] == 1) {
                    find(i, j);
                    dem++;
                }
            }
        }
        
        cout << dem << endl;
    }
    
    return 0;
}


