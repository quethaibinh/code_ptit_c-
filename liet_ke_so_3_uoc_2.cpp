#include<bits/stdc++.h>

#define ll long long

using namespace std;

int a[1000006];

void snt(){
	a[0] = a[1] = 0;
	for(ll i = 2; i <= 1000000; i ++){
		a[i] = 1;
	}
	for(ll i = 2; i <= 1000; i ++){
		if(a[i]){
			for(ll j = i * i; j <= 1000000; j += i){
				a[j] = 0;
			}
		}
	}
}

int main(){
	
	int t; cin >> t;
	snt();
	while(t --){
		ll l, r;
		cin >> l >> r;
		ll dem = 0;
		for(ll i = 2; i <= r; i ++){
			if(i * i > r){
				break;
			}
			if(a[i] && i * i >= l){
				dem ++;
			}
		}
		cout << dem << "\n";
	}
	
	
	return 0;
	
} 
