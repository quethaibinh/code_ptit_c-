#include<bits/stdc++.h>

using namespace std;

int nt[1000006];

void snt(){
	nt[0] = nt[1] = 0;
	for(int i = 2; i <= 1000000; i ++){
		nt[i] = 1;
	}
	for(int i = 2; i <= 1000; i ++){
		if(nt[i]){
			for(int j = i * i; j <= 1000000; j += i){
				nt[j] = 0;
			}
		}
	}
}



int main(){
	
	snt();
	int t; cin >> t;
	while(t --){
		long long n; cin >> n;
		int dem = 0;
		for(int i = 2; i <= sqrt(n); i ++){
			if(nt[i] && i * i <= n){
				dem ++;
			}
		}
		cout << dem << endl;`
	}
	
	return 0;
	
}
