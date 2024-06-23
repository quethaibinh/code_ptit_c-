#include<bits/stdc++.h>

using namespace std;
#define ll long long


int main(){
	
	#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
	#endif 
	
    int n, k;
    cin >> n >> k;
    vector<int> v;
    for(int i = 2; i <= sqrt(n); i ++){
        if(n % i == 0){
            while(n % i == 0){
                v.push_back(i);
                n /= i;
            }
        }
    }
    if(n != 1){
        v.push_back(n);
    }
    if(k > v.size()){
        cout << "-1\n";
    }
    else{
        cout << v[k - 1] << "\n";
    }
    return 0;
}
