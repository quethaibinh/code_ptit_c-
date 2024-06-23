#include<bits/stdc++.h>

using namespace std;

int uc(int x, int t){
	if(t == 0){
		return x;
	}
	return uc(t, x % t);
}

bool kt(int n){
	if(n == 1 || n == 0){
		return false;
	}
	for(int i = 2; i <= sqrt(n); i ++){
		if(n % i == 0){
			return false;
		}
	}
	return true;
}


int main(){
	
	int t; cin >> t;
	while(t --){
		int x; cin >> x;
		int k = 0;
		for(int i = 1; i < x; i ++){
			if(uc(x, i) == 1){
//				cout << i << " ";
				++ k;
			}
		}
		if(kt(k)){
			cout << "1" << endl;
		}else{
			cout << "0" << endl;
		}
	}
	
	return 0;
	
}
