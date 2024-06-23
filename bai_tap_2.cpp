#include<bits/stdc++.h>

using namespace std;

typedef struct yt{
    int ma, sh, kh;
    double diem;
} yt;

double t_diem(yt s){
    return ((double)s.sh * 0.7) + ((double)s.kh * 0.3);
}

void swap(yt *a, yt *b){
    yt tmp = *a;
    *a = *b;
    *b = tmp;
}

int main(){

    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
	#endif 

    int n;
    cin >> n;
    yt a[n];
    for(int i = 0; i < n; i ++){
        cin >> a[i].ma >> a[i].sh >> a[i].kh;
        a[i].diem = t_diem(a[i]);
    }
    for(int i = 0; i < n; i ++){
        int max = i;
        for(int j = i + 1; j < n; j ++){
            if(a[j].diem == a[max].diem){
                if(a[j].ma < a[max].ma){
                    j = max;
                }
            }
            if(a[j].diem > a[max].diem){
                max = j;
            }
        }
        swap(&a[i], &a[max]);
    }
    for(int i = 0; i < 7; i ++){
        int min = i;
        for(int j = i + 1; j < 7; j ++){
            if(a[j].ma < a[min].ma){
                min = j;
            }
        }
        swap(&a[min], &a[i]);
    }
    for(int i = 0; i < 7; i ++){
        cout << a[i].ma << ' ';
    }

    return 0;

}