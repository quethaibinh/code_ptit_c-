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
        int n, x;
        cin >> n >> x;
        int a[n];
        map<int, int> mp;
        bool kt = false;
        for(int i = 0; i < n; i ++){
            cin >> a[i];
            if(mp.find(a[i]) != mp.end()){
                kt = true;
            }
            else{
                mp[x + a[i]] ++;
            }
        }
        if(kt){
            cout << "1\n"; 
        }
        else{
            cout << "-1\n";
        }
    }

    return 0;
}
