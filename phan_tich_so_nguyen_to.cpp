#include<bits/stdc++.h>

using namespace std;

int main(){
	
	int n; cin >> n;
	int dem = 0;
	for(int i = 2; i <= sqrt(n); i ++){
		if(n % i == 0){
			while(n % i == 0){
				dem += 1;
				n /= i;
			}
			cout << i << " " << dem << endl;
			dem = 0;
		}
	}
	if(n != 1){
		cout << n << " " << 1 << endl;
	}
	
	return 0;
	
}
