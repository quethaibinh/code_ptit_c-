#include<bits/stdc++.h>

using namespace std;

void hd(int d, int m, string &s){
    if((m == 3 && d >= 21) || (m == 4 && d <= 19)){
        s = "Bach Duong"; 
    }
    if((m == 4 && d >= 20) || (m == 5 && d <= 20)){
        s = "Kim Nguu"; 
    }
    if((m == 5 && d >= 21) || (m == 6 && d <= 20)){
        s = "Song Tu"; 
    }
    if((m == 6 && d >= 21) || (m == 7 && d <= 22)){
        s = "Cu Giai"; 
    }
    if((m == 7 && d >= 23) || (m == 8 && d <= 22)){
        s = "Su Tu"; 
    }
    if((m == 8 && d >= 23) || (m == 9 && d <= 22)){
        s = "Xu Nu"; 
    }
    if((m == 9 && d >= 23) || (m == 10 && d <= 22)){
        s = "Thien Binh"; 
    }
    if((m == 10 && d >= 23) || (m == 11 && d <= 22)){
        s = "Thien Yet"; 
    }
    if((m == 11 && d >= 23) || (m == 12 && d <= 21)){
        s = "Nhan Ma"; 
    }
    if((m == 12 && d >= 22) || (m == 1 && d <= 19)){
        s = "Ma Ket"; 
    }
    if((m == 1 && d >= 20) || (m == 2 && d <= 18)){
        s = "Bao Binh"; 
    }
    if((m == 2 && d >= 19) || (m == 3 && d <= 20)){
        s = "Song Ngu"; 
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
        int d, m;
        cin >> d >> m;
        string s;
        hd(d, m, s);
        cout << s << '\n';
    }

	return 0;
	
}