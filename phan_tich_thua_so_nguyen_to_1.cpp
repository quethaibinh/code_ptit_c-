#include<bits/stdc++.h>

using namespace std;

int main(){
	
	int t; cin >> t;
	while(t --){
		int n; cin >> n;
		int dem = 0;
		for(int i = 2; i <= sqrt(n); i ++){
			if(n % i == 0){
				while(n % i == 0){
					++ dem;
					n /= i;
				}
				cout << i << " " << dem << " ";
				dem = 0; 
			}
		}
		if(n != 1){
			cout << n << " " << "1";
		}
		cout << endl;
	}
	
	return 0;
	
}
