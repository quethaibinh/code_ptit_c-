#include<bits/stdc++.h>

using namespace std;

void ChuanHoa(string &a){
    string res, token;
    stringstream ss(a);
    while(ss >> token){
        token[0] = toupper(token[0]);
        for(int i = 1; i < token.size(); i ++){
            token[i] = tolower(token[i]);
        }
        res += token;
        res += " ";
    }
    res.erase(res.size() - 1);
    a = res;
}

int main(){
	
	// #ifndef ONLINE_JUDGE
    freopen("DATA.in", "r", stdin);
    // freopen("output.txt", "w", stdout);
	// #endif 
	
    string a[1000];
    int n = 0;
	while(getline(cin, a[n])){
        if(a[n] == "END"){
            break;
        }
        ChuanHoa(a[n]);
        ++ n;
    }
    for(int i = 0; i < n; i ++){
        cout << a[i] << '\n';
    }
	
}
