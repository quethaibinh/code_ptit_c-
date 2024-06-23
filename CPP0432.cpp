#include<bits/stdc++.h>

using namespace std;
#define ll long long

bool cmp(string &a, string b){
    string s1 = a + b;
    string s2 = b + a;
    return s1 > s2;
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
        cin >> n;
        vector<string> v(n);
        for(int i = 0; i < n; i ++){
            cin >> v[i];
        }
        sort(v.begin(), v.end(), cmp);
        for(int i = 0; i < v.size(); i ++){
            cout << v[i];
        }
        cout << '\n';
    }

    return 0;
}
