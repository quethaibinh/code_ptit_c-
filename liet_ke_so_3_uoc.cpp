#include<bits/stdc++.h>

using namespace std;

int nt[1000006];
int nt2[100006];

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
	int k = 0;
	for(int i = 2; i <= 1000000; i ++){
		if(nt[i]){
			nt2[k] = i;
			k ++;
		}
	}
	int t; cin >> t;
	while(t --){
		int n; cin >> n;
		int i = 0;
		while(nt2[i] * nt2[i] <= n){
			cout << nt2[i] * nt2[i] << " ";
			++ i;
		}
		cout << endl;
	}
	
	return 0;
	
}
