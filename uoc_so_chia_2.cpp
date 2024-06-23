#include<bits/stdc++.h>

using namespace std;

int main(){
	
	int t; cin >> t;
	while(t --){
		int n; cin >> n;
		int b[10000] = {0};
		int k = 0;
//		memset(b, 0, sizeof(b));
		if(n % 2 != 0){
			cout << "0" << endl;
		}else{
			for(int i = 2; i <= sqrt(n); i ++){
				if(n % i == 0){
					while(n % i == 0){
						b[k] ++;
						n /= i;
					}
					++ k;
				}
			}
			if(n != 1){
				b[k] ++;
				++ k;
			}
			int dem = b[0];
			for(int i = 1; i < k ; i ++){
				dem *= (b[i] + 1);
			}
			cout << dem << endl;
		}
	}
	
	return 0;
	
}
