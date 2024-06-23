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
        int a[n + 1];
        bool kt = false;
        int x;
        ll b1[n + 2], b2[n + 2];
        a[0] = b1[0] = b2[0] = b1[n + 1] = b2[n + 1] = 0;
        for(int i = 1; i <= n; i ++){
            cin >> a[i];
            b1[i] = b1[i - 1] + a[i];
        }
        for(int i = n; i >= 1; i --){
            b2[i] = b2[i + 1] + a[i];
        }
        for(int i = 1; i <= n; i ++){
            if(b1[i - 1] == b2[i + 1]){
                x = i;
                kt = true;
                break;
            }
        }
        if(kt){
            cout << x << '\n';
        }
        else{
            cout << "-1\n"; 
        }
    }
	
	return 0;
}
