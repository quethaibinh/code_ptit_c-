#include<bits/stdc++.h>

using namespace std;

int pow1(int n){
	long long m = 1;
	for(int i = 0; i < n; i ++){
		m *= 10;
	}
	return m;
}

bool kt(long long n){
	long long m = n;
	int dc = 0, dl = 0;
	while(m >= 1){
		int x = m % 10;
		if(x % 2 == 0){
			++ dc;
		}else{
			++ dl;
		}
		m /= 10;
	}
	if(dc == dl){
		return true;
	}
	return false;
}

int main(){
	
	int n; cin >> n;
	int dem = 0;
	for(long long i = pow1(n - 1); i < pow1(n); i ++){
		if(kt(i)){
			cout << i << " ";
			dem += 1;
		}
		if(dem == 10){
			dem = 0;
			cout << endl;
		}
	}
	
	
	return 0;
	
} 
