#include<bits/stdc++.h>

using namespace std;

int kt(int n){
	int m = n;
	int a[100];
	int k = 0;
	for(int i = 2; i <= sqrt(m); i ++){
		if(m % i == 0){
			while(m % i == 0){
				if(k >= 3){
					return 0;
				}
				if(a[k - 1] == i){
					return 0;
				}
				a[k] = i;
				++ k;
				m /= i;
			}
		}
	}
	if(m != 1){
		a[k] = m;
		++ k;
	}
	if(k != 3){
		return 0;
	}
	return 1;
}


int main(){
	
	int t; cin >> t;
	while(t --){
		int n; cin >> n;
		cout << kt(n) << endl;
	}
	
	return 0;
	
}
