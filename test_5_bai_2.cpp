#include<bits/stdc++.h>

using namespace std;
#define ll long long


int main(){
	
	#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
	#endif 
	
    ll n, m;
    cin >> n >> m;
    vector<ll> a(n);
    int b[m], check[n];
    // memset(check, 1, sizeof(check));
    for(int i = 0; i < n; i ++){
        cin >> a[i];
        check[i] = 1;
    }
    sort(a.begin(), a.end());
    for(ll i = 0; i < m; i ++){
        cin >> b[i];
    }
    for(ll i = 0; i < m; i ++){
        ll x = lower_bound(a.begin(), a.end(), b[i]) - a.begin();
        if(x != n && a[x] == b[i]){
            if(check[x]){
                cout << a[x] << '\n';
                check[x] = 0;
            }
            else{
                while(!check[x]){
                    -- x;
                }
                if(x < 0){
                    cout << "-1\n";
                }
                else{
                    cout << a[x] << '\n';
                    check[x] = 0;
                }
            }
        }
        else{
            -- x;
            if(check[x]){
                cout << a[x] << '\n';
                check[x] = 0;
            }
            else{
                while(!check[x]){
                    -- x;
                }
                if(x < 0){
                    cout << "-1\n";
                }
                else{
                    cout << a[x] << '\n';
                    check[x] = 0;
                }
            }
        }
    }

    return 0;
}
