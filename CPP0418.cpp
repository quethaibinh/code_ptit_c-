#include<bits/stdc++.h>

using namespace std;


int main(){
	
	#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
	#endif 
	
    int t;
    cin >> t;
    while(t --){
        int n, m;
        cin >> n >> m;
        int a[n], b[m];
        map<int, int> mp;
        for(int i = 0; i < n; i ++){
            cin >> a[i];
            mp[a[i]] ++;
        }
        for(int i = 0; i < m; i ++){
            cin >> b[i];
            mp[b[i]] ++;
        }
        for(auto x : mp){
            cout << x.first << ' ';
        }
        cout << '\n';
        for(auto x : mp){
            if(x.second > 1){
                cout << x.first << ' ';
            }
        }
        cout << '\n';
    }
	
	return 0;
}
