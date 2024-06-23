#include<bits/stdc++.h>

using namespace std;

int u(int n){
	if(n == 1){
		return 1;
	}
	for(int i = 2; i <= n; i ++){
		if(n % i == 0){
			return i;
		}
	}
}


int main(){
	
	int t; cin >> t;
	while(t --){
		int n; cin >> n;
		for(int i = 1; i <= n; i ++){
			cout << u(i) << " ";
		}
		cout << endl;
	}
	
	return 0;
	
}
