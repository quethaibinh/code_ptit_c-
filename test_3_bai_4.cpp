#include<bits/stdc++.h>

using namespace std;
#define ll long long

bool cmp(string &a, string &b){
    if(a.size() != b.size()){
        return a.size() > b.size();
    }
    return a > b;
}

int main(){
	
	#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
	#endif 
	
    string s;
    cin >> s;
    vector<string> v;
    int i = 0;
    while(i < s.size()){
        if(s[i] >= '0' && s[i] <= '9'){
            int k = i;
            int m = 0;
            while(s[k] >= '0' && s[k] <= '9'){
                ++ k;
                ++ m;
            }
            // cout << i << ' ' << k << '\n';
            // cout << s.substr(i, k - i) << '\n';
            string x = s.substr(i, k - i);
            // cout << x << '\n';
                int j = 0;
                while(x[j] == '0' && j < x.size() - 1){
                    j ++;
                }
                string y = x.substr(j, k - i - j);
                v.push_back(y);
                i = k - 1;
        }
        i ++;
    }
    sort(v.begin(), v.end(), cmp);
    cout << v[0] << '\n';  
    // for(int i = 0; i < v.size(); i ++){
    //     cout << v[i] <<'\n';
    // }

    return 0;
}
