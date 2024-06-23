#include<bits/stdc++.h>

using namespace std;

long long pow1(int n){
	long long k = 1;
	for(int i = 0; i < n; i ++){
        k *= 10;
	}
	return k;
}

bool kt(string s){
    string m = s;
    int l = 0, r = m.size() - 1;
    while(l < r){
        swap(m[l], m[r]);
        l ++;
        r --;
    }
    if(s == m){
        return true;
    }else{
        return false;
    }
}

int main(){

    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
	#endif 

    int n;
    cin >> n;
    long long tong = 0;
    for(long long i = pow1(n - 1); i < pow1(n); i ++){
        string s = to_string(i);
        if(kt(s)){
            tong += i;
        }
    }
    cout << tong;

    return 0;

}