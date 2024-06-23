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
        scanf("\n");
        string s, token;
        getline(cin, s);
        vector<string> v;
        stringstream ss(s);
        while(ss >> token){
            v.push_back(token);
        }
        int l = 0, r = v.size() - 1;
        while(l < r){
            swap(v[l ++], v[r --]);
        }
        for(auto x : v){
            cout << x << ' ';
        }
        cout << '\n';
    }

    return 0;
}
