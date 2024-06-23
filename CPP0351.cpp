#include<bits/stdc++.h>

using namespace std;

string ChuanHoa(string &s, int n){
    vector<string> v;
    string res, token;
    stringstream ss(s);
    while(ss >> token){
        token[0] = toupper(token[0]);
        for(int i = 1; i < token.size(); i ++){
            token[i] = tolower(token[i]);
        }
        v.push_back(token);
    }
    if(n == 1){
        res += v[v.size() - 1] + " ";
        for(int i = 0; i < v.size() - 1; i ++){
            res += v[i] + " ";
        }
        res.erase(res.size() - 1);
    }
    else{
        for(int i = 1; i < v.size(); i ++){
            res += v[i] + ' ';
        }
        res += v[0];
    }
    s = res;
    return s;
}

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
        cin >> n;
        scanf("\n");
        getline(cin, s);
        cout << ChuanHoa(s, n) << '\n';   
    }
	
	return 0;
}
