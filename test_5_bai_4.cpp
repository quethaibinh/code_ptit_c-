#include<bits/stdc++.h>

using namespace std;
#define ll long long


int main(){
	
	#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
	#endif 
	
    string s;
    cin >> s;
    map<char, int> mp;
    vector<pair<char, int>> v;
    for(int i = 0; i < s.size(); i ++){
        if(mp[s[i]] == 0){
            mp[s[i]] = 1;
        }
        if(s[i] == s[i + 1]){
            mp[s[i]] ++;
        }
        else{
            v.push_back({s[i], mp[s[i]]});
            mp[s[i]] = 0;
        }
    }
    for(int i = 0; i < v.size(); i ++){
        cout << v[i].first << v[i].second;
    }

    return 0;
}
