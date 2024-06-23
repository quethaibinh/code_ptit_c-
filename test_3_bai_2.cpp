#include<bits/stdc++.h>

using namespace std;
#define ll long long


int main(){
	
	#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
	#endif 
	
    ll n;
    cin >> n;
    ll a[n];
    for(ll i = 0; i < n; i ++){
        cin >> a[i];
    }
    map<ll, ll> mp;
    ll sum = 0;
    ll vtdau = -1, dodai = 0;
    mp[0] = -1;
    for(ll i = 0; i < n; i ++){
        sum += a[i];
        if(mp.find(sum) != mp.end()){
            if(dodai < i - mp[sum]){
                dodai = i - mp[sum];
                vtdau = mp[sum] + 1;
            }
        }
        else{
            mp[sum] = i;
        }
    }
    if(vtdau != -1){
        for(int i = vtdau; i < vtdau + dodai; i ++){
            cout << a[i] << ' ';
        }
    }
    else{
        cout << "NOT FOUND";
    }

    return 0;
}
