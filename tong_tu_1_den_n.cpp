#include<bits/stdc++.h>

using namespace std;

int main(){
	
	
	int t; cin >> t;
	while(t --){
		long long n; cin >> n;
		if(n % 2 == 0){
			long long m = ((n) / 2) * (n + 1);
			cout << m << endl;
		}else{
			long long m = ((n + 1) / 2) * n;
			cout << m << endl;
		}
 	}
	
	return 0;
	
}
