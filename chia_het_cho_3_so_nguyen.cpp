#include<bits/stdc++.h>

using namespace std;

long long gcd(long long x, long long y){
	if(y == 0){
		return x;
	}
	return gcd(y, x % y);
}

long long lcd(long long x, long long y){
	return (x / gcd(x, y)) * y;
}

long long pow1(long long n){
	long long m = 1;
	for(int i = 1; i <= n; i ++){
		m *= 10;
	}
	return m;
}

int main(){
	
	int t; cin >> t;
	while(t --){
		bool kt = false;
		long long x, y, z, n; cin >> x >> y >> z >> n;
		long long lcd1 = lcd(x, y);
		long long lcd2 = lcd(lcd1, z);
//		cout << lcd2 << " ";
		if(lcd2 < pow1(n)){
			if(lcd2 >= pow1(n - 1)){
				cout << lcd2 << endl; 
			}else{
				long long m = pow1(n - 1) / lcd2;
				if(m * lcd2 == pow1(n - 1)){
					cout << pow1(n - 1) << endl;
				}else{
					
					long long ans = lcd2 * (m + 1);
					if (ans<pow1(n)) cout<<ans<<"\n";
					else cout<<"-1\n";
				}
			}
		}else{
			cout << "-1\n" << endl;
		}
	}
	
	return 0;
	
} 
