#include <bits/stdc++.h>

using namespace std;

int main(){
	
	int n; cin >> n;
	int a[n], b[n];
	
	for(int i = 0 ; i < n; i++) {
		cin >> a[i];
		b[i] = a[i];
	}
	sort(a, a+n);
	
	for(int i = 0 ; i < n; i++) {
		auto it = lower_bound(a, a+n, b[i]);
		
		if(it == a) {
			cout << "# ";
		} else {
			--it;
			cout << *it << " ";
		}
	}
}
