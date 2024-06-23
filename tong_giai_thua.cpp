#include<bits/stdc++.h>

using namespace std;

int main(){
	
	int n; cin >> n;
	long long tong = 0;
	for(int i = 1; i <= n; i ++){
		long long gt = 1;
		for(int j = 1; j <= i; j ++){
			gt *= j;
		}
		tong += gt;
	}
	cout << tong << endl;
	
	return 0;
	
}
