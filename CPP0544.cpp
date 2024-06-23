#include<bits/stdc++.h>

using namespace std;
#define PI 3.141592653589793238

double canh(double a1, double a2, double b1, double b2){
    return sqrt((a1 - b1) * (a1 - b1) + (a2 - b2) * (a2 - b2));
}

bool kttg(double c1, double c2, double c3){
    if(c1 >= c2 + c3 || c2 >= c1 + c3 || c3 >= c1 + c2){
        return false;
    }
    return true;
}

int main(){
	
	#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
	#endif 
	
    int n;
    cin >> n;
    while(n --){
        double a1, a2, b1, b2, c1, c2;
        cin >> a1 >> a2 >> b1 >> b2 >> c1 >> c2;
        double ca1, ca2, ca3;
        ca1 = canh(a1, a2, b1, b2);
        ca2 = canh(b1, b2, c1, c2);
        ca3 = canh(a1, a2, c1, c2);
        if(!kttg(ca1, ca2, ca3)){
            cout << "INVALID\n";
        }
        else{
            double p = (ca1 + ca2 + ca3) / 2;
            double s = sqrt(p * (p - ca1) * (p - ca2) * (p - ca3));
            double r = (ca1 * ca2 * ca3) / (4 * s);
            double st = r * r * PI;
            printf("%.3lf\n", st);
        }
    }
	
	return 0;
}
