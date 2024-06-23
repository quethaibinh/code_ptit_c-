#include<bits/stdc++.h>

using namespace std;
#define ll long long


int main(){
	
	#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
	#endif 
	
    int t;
    cin >> t;
    while(t --){
        int n;
        cin >> n;
        ll a[n];
        map<ll, ll> mp;
        ll max = 0;
        for(int i = 0; i < n; i ++){
            cin >> a[i];
            mp[a[i] * a[i]] ++;
            if(max < a[i] * a[i]){
                max = a[i] * a[i];
            }
        }
        sort(a, a + n);
        bool kt = false;
        for(int i = 0; i < n; i ++){
            for(int j = i + 1; j < n; j ++){
                ll x = a[i] * a[i] + a[j] * a[j];
                if(mp.find(x) != mp.end()){
                    kt = true;
                    break;
                }
                if(x > max){
                    break;
                }
            }
            if(kt){
                break;
            }
        }
        if(kt){
            cout << "YES\n";
        }
        else{
            cout << "NO\n";
        }
    }

    return 0;
}
