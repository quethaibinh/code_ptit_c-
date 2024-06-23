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
        int n1, n2, n3;
        map<ll, int> mp; 
        cin >> n1 >> n2 >> n3;
        ll a[n1], b[n2], c[n3];
        for(int i = 0; i < n1; i ++){
            cin >> a[i];
            if(mp[a[i]] < 1){
                mp[a[i]] ++;
            }
        }
        for(int i = 0; i < n2; i ++){
            cin >> b[i];
            if(mp[b[i]] < 2){
                mp[b[i]] ++;
            }
        }
        for(int i = 0; i < n3; i ++){
            cin >> c[i];
            if(mp[c[i]] < 3){
                mp[c[i]] ++;
            }
        }
        bool kt = false;
        for(auto x : mp){
            if(x.second == 3){
                kt = true;
                cout << x.first << ' ';
            }
        }
        if(!kt){
            cout << "-1";
        }
        cout << '\n';
    }

    return 0;
}
