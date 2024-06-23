#include<bits/stdc++.h>

using namespace std;

int main(){
	
	int t; cin >> t;
	while(t --){
		int n, k; cin >> n >> k;
		bool kt = false;
		for(int i = 2; i <= sqrt(n); i ++){
			if(n % i == 0){
				while(n % i == 0){
					k -= 1;
					n /= i;
					if(k == 0){
						cout << i;
						kt = true;
						break;
					}
				}
				if(kt){
					break;
				}
			}
		}
		if(k == 1 && n != 1){
			cout << n;
			kt = true;
		}
		if(!kt){
			cout << "-1";
		}
		cout << endl;
	}
	
	return 0;
	
} 
