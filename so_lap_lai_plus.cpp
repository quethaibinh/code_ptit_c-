#include<bits/stdc++.h>

#define ll long long


using namespace std;

ll gcd(ll a, ll b){
	if(b == 0){
		return a;
	}
	return gcd(b, a % b);
}

int main(){
	
	int t; cin >> t;
	while(t --){
		ll a, x, y; cin >> a >> x >> y;
		ll m = gcd(x, y);
		for(ll i = 0; i < m; i ++){
			cout << a;
		}
		cout << "\n";
	}
	
	
	return 0;
	
}
