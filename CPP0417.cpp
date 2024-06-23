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
        int n;
        vector<int> v;
        cin >> n;
        int a[n], b[n];
        for(int i = 0; i < n; i ++){
            cin >> a[i];
            b[i] = a[i];
        }
        sort(a, a + n);
        for(int i = 0; i < n; i ++){
            if(a[i] != b[i]){
                v.push_back(i + 1);
            }
        }
        cout << v.front() << ' ' << v.back() << '\n';
    }
	
	return 0;
}
