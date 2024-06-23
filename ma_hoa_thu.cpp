#include<bits/stdc++.h>

using namespace std;


void ChuanHoa(string &s){
    for(int i = 0; i < s.size(); i ++){
        if(s[i] >= 'a' && s[i] <= 'z'){
            if(s[i] == 'a'){
                s[i] = 'y';
            }
            else if(s[i] == 'b'){
                s[i] = 'z';
            }
            else{
                s[i] -= 2;
            }
        }
        else if(s[i] >= 'A' && s[i] <= 'Z'){
            if(s[i] == 'Y'){
                s[i] = 'A';
            }
            else if(s[i] == 'Z'){
                s[i] = 'B';
            }
            else{
                s[i] += 2;
            }
        }
    }
}

int main(){
	
	#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
	#endif 
	
    string s;
    getline(cin, s);
    ChuanHoa(s);
    cout << s;


	return 0;
	
}
