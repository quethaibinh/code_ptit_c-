#include<bits/stdc++.h>

using namespace std;
#define ll long long

bool cmp(pair<string, int> &a, pair<string, int> &b){
    if(a.second == b.second){
        return a.first < b.first;
    }
    return a.second > b.second;
}

int main(){
	
	#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
	#endif 

    string s;
    map<string, int> mp;
    vector<pair<string, int>> v;
    while(getline(cin, s)){
        string doi1, doi2;
        int k, l, x, r;
        for(int i = 0; i < s.size(); i ++){
            if(s[i] >= '0' && s[i] <= '9' && s[i - 1] == ' '){
                doi1 = s.substr(0, i - 1);
                k = i;
                break;
            }
        }
        for(int i = k; i < s.size(); i ++){
            if(s[i] == '-'){
                mp[doi1] += stoi(s.substr(k, i - k - 1));
                l = i;
                break;
            }
        }
        for(int i = l + 2; i < s.size(); i ++){
            if(s[i] == ' '){
                x = stoi(s.substr(l + 2, i - l - 2));
                r = i;
                break;
            }
        }
        mp[s.substr(r + 1)] += x;
    }
    for(auto x : mp){
        v.push_back(x);
    }
    sort(v.begin(), v.end(), cmp);
    for(auto x : v){
        cout << x.first << ' ' << x.second << '\n';
    }

    return 0;
}
