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
        int a[n];
        for(int i = 0; i < n; i ++) cin >> a[i];
        prev_permutation(a, a + n);
        for(int i = 0; i < n; i ++) cout << a[i] << ' ';
        cout << '\n';
    }

    return 0;
}
