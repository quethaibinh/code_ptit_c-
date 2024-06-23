#include<bits/stdc++.h>

using namespace std;

int nt[10004];

void snt(){
	nt[0] = nt[1] = 0;
	for(int i = 2; i <= 10000; i ++){
		nt[i] = 1;
	}
	for(int i = 2; i <= 100; i ++){
		if(nt[i]){
			for(int j = i * i; j <= 10000; j += i){
				nt[j] = 0;
			}
		}
	}
}

int main(){
	
	int t; cin >> t;
	snt();
	while(t --){
		int n; cin >> n;
		for(int i = 2; i <= n; i ++){
			if(nt[i]){
				cout << i << " ";
			}
		}
		cout << endl;
	}
	
	return 0;
	
}
