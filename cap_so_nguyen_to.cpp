#include<bits/stdc++.h>

using namespace std;

int nt[1000006];

void snt(){
	nt[0] = nt[1] = 0;
	for(int i = 2; i < 1000000; i ++){
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
		int n; cin >> n;
		bool kt = false;
		for(int i = 0; i <= n / 2; i ++){
			if(nt[i] && nt[n - i]){
				kt = true;
				cout << i << " " << n - i;
				break;
			}
		}
//		if(!kt){
//			cout << "-1";
//		}
		cout << endl;
	}
	
	return 0;
	
}
