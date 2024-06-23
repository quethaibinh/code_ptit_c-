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
        string s;
        cin >> s;
        string t = s.substr(s.size() - 2, s.size() - 1);
        if(t != "86"){
            cout << "NO\n";
        }
        else{
            cout << "YES\n";
        }
    }
	
	return 0;
}
