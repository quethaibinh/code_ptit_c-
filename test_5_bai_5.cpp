#include<bits/stdc++.h>

using namespace std;
#define ll long long

struct sukien{
    string ten;
    ll chiso;
};

void nhap(sukien &a){
    cin >> a.ten;
    if(a.ten == "witch" || a.ten == "soldier"){
        cin >> a.chiso;
    }
}

class SuKien{
    public:
        ll mau, sm;
        string sc, m , s;
        int n;
        sukien sk[1005];
        ll tach1(){
            return stoll(m.substr(8));
        }
        friend istream &operator >> (istream &is, SuKien &a){
            scanf("\n");
            getline(is, a.s);
            scanf("\n");
            getline(is, a.m);
            scanf("\n");
            getline(is, a.sc);
            a.mau = a.tach1();
            a.sm = a.tach1();
            is >> a.n;
            for(int i = 0; i < a.n; i ++){
                nhap(a.sk[i]);
            }
            return is;
        }
        friend ostream &operator << (ostream &os, SuKien &a){
            bool kt = true;
            int j = 0;
            for(int i = 0; i < a.n; i ++){
                if(a.sc == "DEAD"){
                    j = i;
                    kt = false;
                    break;
                }
                else{
                    if(a.sk[i].ten == "mushroom"){
                        a.mau -= 15;
                        a.sm -= 2;
                        if(a.sm == 0 || a.mau == 0){
                            a.sc = "DEAD";
                        }
                        os << "POWER : " << a.sm << '\n' << "BLOOD : " << a.mau << '\n' << a.sc << '\n';
                    }
                    if(a.sk[i].ten == "pea"){
                        a.mau += 10;
                        a.sm += 2;
                        if(a.sm == 0 || a.mau == 0){
                            a.sc = "DEAD";
                        }
                        os << "POWER : " << a.sm << '\n' << "BLOOD : " << a.mau << '\n' << a.sc << '\n';
                    }
                    if(a.sk[i].ten == "witch"){
                        if(a.sk[i].chiso >= a.sm){
                            a.sm = 0;
                            a.mau = 0;
                            a.sc = "DEAD";
                        }
                        else{
                            a.sm += 5;
                        }
                        os << "POWER : " << a.sm << '\n' << "BLOOD : " << a.mau << '\n' << a.sc << '\n';
                    }
                    if(a.sk[i].ten == "soldier"){
                        if(a.sk[i].chiso >= a.sm){
                            a.sm = 0;
                            a.mau = 0;
                            a.sc = "DEAD";
                        }
                        else{
                            a.sm += 7;
                            a.mau += 5;
                        }
                        os << "POWER : " << a.sm << '\n' << "BLOOD : " << a.mau << '\n' << a.sc << '\n';
                    }
                    os << "--------------------\n";
                }
            }
            if(!kt){
                for(int i = j; i < a.n; i ++){
                    os << "POWER : 0\n" << "BLOOD : 0\n" << "DEAD\n" << "--------------------\n"; 
                }
            }
            return os;
        }
};

int main(){
	
	#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
	#endif 
	
    SuKien a;
    cin >> a;
    cout << a;

    return 0;
}
