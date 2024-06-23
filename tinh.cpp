#include<bits/stdc++.h>

using namespace std;

int main(){
	
	int t; cin >> t;
	while(t --){
		long long n; cin >> n;
		while(n / 10 != 0){
			long long m = 0;
			while(n >= 1){
				m += n % 10;
				n /= 10;
			}
			n = m;
		}
		cout << n << endl;
	}
	
	return 0;
	
}
