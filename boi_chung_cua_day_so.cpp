#include<bits/stdc++.h>

using namespace std;

int uc(long long a, long long b){
	if(b == 0){
		return a;
	}else{
		return uc(b, a % b);
	}
}


int main(){
	
	long long a[1003];
	a[0] = 1; // boi dau tien
	for(long long  i = 1; i <= 1000; i ++){
		a[i] = (a[i - 1] / uc(a[i - 1], i)) * i;
	}
	int t; cin >> t;
	while(t --){
		int n; cin >> n;
		cout << a[n] << endl;
	}
	
	return 0;
	
} 
