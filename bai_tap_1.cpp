#include<bits/stdc++.h>

using namespace std;

typedef struct so{
    int gt, cs;
} so;

void swap(so *a, so *b){
    so tmp = *a;
    *a = *b;
    *b = tmp;
}


int main(){

    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
	#endif 
    
    int n, m;
    cin >> n >> m;
    so a[n];
    for(int i = 0; i < n; i ++){
        cin >> a[i].gt;
        a[i].cs = 1;
        for(int j = 0; j < i; j ++){
            if(a[j].cs != 0 && a[i].gt == a[j].gt){
                a[j].cs ++;
                a[i].cs = 0;
                break;
            }
        }
    }
    for(int i = 0; i < n; i ++){
        int max = i;
        for(int j = i + 1; j < n; j ++){
            if(a[j].cs == a[max].cs){
                if(a[max].gt < a[j].gt){
                    max = j;
                }
            }
            if(a[j].cs > a[max].cs){
                max = j;
            }
        }
        swap(&a[i], &a[max]);
    }
    // for(int i = 0; i < n; i ++){
    //     cout << a[i].cs << ' ';
    // }
    int x = a[0].cs;
    bool check = true;
    for(int i = 1; i < n; i ++){
        if(a[i].cs != 0 && a[i].cs < x){
            cout << a[i].gt;
            check = false;
            break;
        }
    }
    if(check){
        cout << "NONE";
    }

    return 0;

}