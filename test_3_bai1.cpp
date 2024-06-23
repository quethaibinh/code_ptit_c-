#include<bits/stdc++.h>

using namespace std;
#define ll long long


int main(){
	
	#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
	#endif 
	
    ll n, x;
    cin >> n >> x;
    ll cnt = 0;
    for(ll i = 1; i <= sqrt(x); i ++){
        if(x % i == 0){
            if(i * i == x && i <= n){
                cnt ++;
            }
            else{
                 if(i <= n && x / i <= n){
                    cnt += 2;
                }
            } 
        }
    }
    cout << cnt;    
    
    
    return 0;
}
