#include<bits/stdc++.h>

using namespace std;
#define ll long long


int main(){
	
	#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
	#endif 
	
    int n;
    cin >> n;
    map<string, int> mp;
    vector<string> v2;
    while(n --){
        string s, token, res = "";
        vector<string> v;
        scanf("\n");
        getline(cin, s);
        stringstream ss(s);
        while(ss >> token){
            for(int i = 0; i < token.size(); i ++){
                token[i] = tolower(token[i]);
            }
            v.push_back(token);
        }
        res += v[v.size() - 1];
        for(int i = 0; i < v.size() - 1; i ++){
            res += v[i][0];
        }
        mp[res] ++;
        if(mp[res] > 1){
            v2.push_back(res + to_string(mp[res]) + "@ptit.edu.vn");
        }
        else{
            v2.push_back(res + "@ptit.edu.vn");
        }
    }
    for(int i = 0; i < v2.size(); i ++){
        cout << v2[i] << '\n';
    }

    return 0;
}
