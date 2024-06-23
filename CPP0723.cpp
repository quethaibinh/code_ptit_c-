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
        string s;
        map<int, int> mp;
        cin >> n >> s;
        for(int i = 0; i < s.size(); i ++){
            for(int j = 2; j <= (int)s[i]; i ++){
                int x = j;
                for(int k = 2; k <= sqrt(x); k ++){
                    if(x % k == 0){
                        while(x % k == 0){
                            mp[k] ++;
                            x /= k;
                        }
                    }
                }
                if(x != 1){
                    mp[x] ++;
                }
            }
        }
        for(auto x : mp){
            
        }

    }

    return 0;
}
