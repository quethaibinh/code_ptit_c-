#include<bits/stdc++.h>

using namespace std;

int x;
bool cmp(int a, int b){
    return abs(x - a) < abs(x - b);
}

int main(){
    
	#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
	#endif 
	
    int t;
    cin >> t;
    while(t --){
        int n;
        cin >> n >> x;
        int a[n];
        for(int i = 0; i < n; i ++){
            cin >> a[i];
        }
        stable_sort(a, a + n, cmp);
        for(auto y : a){
            cout << y << ' ';
        }
        cout << '\n';
    }
	
	return 0;
}
