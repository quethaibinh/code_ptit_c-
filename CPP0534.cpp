#include<bits/stdc++.h>

using namespace std;
#define ll long long

bool kt(string s){
    if(s.size() < 2){
        return false;
    }
    string s2 = s;
    int l = 0, r = s2.size() - 1;
    while(l < r){
        swap(s2[l ++], s2[r --]);
    }
    if(s2 == s){
        return true;
    }
    else{
        return false;
    }
}

bool cmp(pair<string, int> &a, pair<string, int> &b){
    if(a.first.size() == b.first.size()){
        for(int i = 0; i < a.first.size(); i ++){
            if(a.first[i] == b.first[i]){
                continue;
            }
            return a.first[i] > b.first[i];
        }
    }
    else{
        return a.first.size() > b.first.size();
    }
}

int main(){
	
	#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
	#endif 
	
    string s;
    vector<pair<string, int>> v;
    map<string, int> mp;
    while(cin >> s){
        if(kt(s)){
            mp[s] ++;
        }
    }
    for(auto x : mp){
        v.push_back(x);
    }
    sort(v.begin(), v.end(), cmp);
    for(int i = 0; i < v.size(); i ++){
        cout << v[i].first << ' ' << v[i].second << '\n';
    }
    

    return 0;
}
