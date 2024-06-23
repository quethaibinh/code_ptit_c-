#include<bits/stdc++.h>

using namespace std;

int main(){
	
	int n; cin >> n;
	bool kt = true;
	for(int i = 2; i <= sqrt(n); i ++){
		if(n % i == 0){
			kt = false;
			break;
		}
	}
	if(kt){
		if(n == 0 || n == 1){
			cout << "NO" << endl;
		}else{
			cout << "YES" << endl;
		}
	}else{
		cout << "NO" << endl;
	}
	
	return 0;
	
}
