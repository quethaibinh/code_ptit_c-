#include<bits/stdc++.h>

using namespace std;

#define for(i, a, b) for(i = a; i <= b; i ++);
#define ll long long

void dao(string &s){
    int l = 0, r = s.size() - 1;
    while(l < r){
        swap(s[l], s[r]);
        r ++;
        l --;
    }
}

void hieu(string s1, string s2, string h){
    if(s1.size() == s2.size()){
        max1 = max(s1, s2).size();
    }
    dao(s1);
    dao(s2);
    int max1 = max(s1.size(), s2.size());
    int i, muon, cnt = 0;
    for(i, 0, max1){
        h[cnt] = ((int)(s1[i] - '0') - (int)(s2[i] - '0') + muon);
        ++ cnt;
    }
}

int main(){

    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
	#endif 
    
    string s1, s2;
    cin >> s1 >> s2;

    return 0;

}