#include<bits/stdc++.h>

using namespace std;

char DinhNghia(char s){
    if(s == 'A' || s == 'B' || s == 'C'){
        return '2';
    }
    if(s == 'D' || s == 'E' || s == 'F'){
        return '3';
    }
    if(s == 'G' || s == 'H' || s == 'I'){
        return '4';
    }
    if(s == 'J' || s == 'K' || s == 'L'){
        return '5';
    }
    if(s == 'M' || s == 'N' || s == 'O'){
        return '6';
    }
    if(s == 'P' || s == 'Q' || s == 'R' || s == 'S'){
        return '7';
    }
    if(s == 'T' || s == 'U' || s == 'V'){
        return '8';
    }
    if(s == 'W' || s == 'X' || s == 'Y' || s == 'z'){
        return '9';
    }
}

void ChuanHoa(string &s){
    for(int i = 0; i < s.size(); i ++){
        s[i] = toupper(s[i]);
    }
}

bool kt(string s){
    string ss = "";
    ChuanHoa(s);
    for(int i = 0; i < s.size(); i ++){
        ss += DinhNghia(s[i]);
    }
    string s2 = ss;
    int l = 0, r = s.size() - 1;
    while(l < r){
        swap(s2[l ++], s2[r --]);
    }
    if(s2 == ss){
        return true;
    }
    else{
        return false;
    }
}

int main(){
	
	#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
	#endif 
	
    int t;
    cin >> t;
    while(t --){
        string s;
        cin >> s;
        if(kt(s)){
            cout << "YES\n";
        }
        else{
            cout << "NO\n";
        }
    }
	
	return 0;
}
