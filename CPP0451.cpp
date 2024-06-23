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
        int n, y, k;
        cin >> n;
        vector<int> a(n);
        for(int i = 0; i < n; i ++){
            cin >> a[i];
        }
        cin >> k >> y;
        int x = lower_bound(a.begin(), a.end(), y) - a.begin();
        int l, r;
        if(a[x] == y){
            r = x + 1;
            l = x - 1;
        }
        else{
            r = x --;
            l = x;
        }
        for(int i = l - (k / 2) + 1; i <= l; i ++){
            cout << a[i] << ' ';
        }
        for(int i = r; i < r + (k / 2); i ++){
            cout << a[i] << ' ';
        }
        cout << '\n';
    }

    return 0;
}
