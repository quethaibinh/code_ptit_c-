#include<bits/stdc++.h>

using namespace std;

int main(){
	
	int t; cin >> t;
	while(t --){
		int m, n, a, b; cin >> m >> n >> a >> b;
		int dem = 0;
		for(int i = m; i <= n; i ++){
			if(i % a == 0 && i % b == 0){
				dem += 1;
			}else{
				if(i % a == 0){
					dem += 1;
				}
				if(i % b == 0){
					dem += 1;
				}
			}
		}
		cout << dem << endl;
	}
	
	
	return 0;
	
} 
