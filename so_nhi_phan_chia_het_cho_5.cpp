#include<bits/stdc++.h>

using namespace std;

int main(){

    int t;
    cin >> t;
    while(t --){
        string s;
        cin >> s;
        int check = 0;
        for(int i = 0; i < s.size(); i ++){
            check = (check * 2 + (s[i] - '0')) % 5;
        }
        if(check == 0){
            cout << "Yes\n"; 
        }else{
            cout << "No\n";
        }
    }

    return 0;

}