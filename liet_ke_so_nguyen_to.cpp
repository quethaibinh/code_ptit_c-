#include<bits/stdc++.h>

using namespace std;

int nt[1000001];

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
	int a, b; cin >> a >> b;
	for(int i = min(a, b) + 1; i < max(a, b); i ++){
		if(nt[i]){
			cout << i << " ";
		}
	}
	
	return 0;
	
}
