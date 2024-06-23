#include<bits/stdc++.h>

using namespace std;
#define ll long long


int main(){
	
	#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
	#endif 
	
    ll n, k;
    ll cnt = 0;
    cin >> n >> k;
    ll a[n];
    map<ll, ll> mp;
    vector<pair<ll, ll>> v;
    for(ll i = 0; i < n; i ++){
        cin >> a[i];
        if(a[i] < k){
            mp[a[i]] ++;
        }
    }
    for(auto x : mp){
        v.push_back(x);
    }
    sort(v.begin(), v.end());
    for(ll i = 0; i < v.size(); i ++){
        if(v[i].second > 1 && v[i].first * 2 < k){
            cnt += v[i].second * (v[i].second - 1) / 2;
        }
        for(ll j = i + 1; j < v.size(); j ++){
            if(v[i].first + v[j].first < k){
                cnt += v[i].second * v[j].second;
            }
            else{
                break;
            }
        }
    }
    cout << cnt;

    return 0;
}
