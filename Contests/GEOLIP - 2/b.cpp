#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    int j1, j2;
    int pj1, pj2;

    while(true){
        scanf("%d", &n);
        if(n == 0) break;
        pj1 = pj2 = 0;
        for(int i = 0; i < n; i++){
            scanf("%d %d", &j1, &j2);
            if(j1 > j2){
                pj1++;
            }else if(j2 > j1){
                pj2++;
            }
        }
        printf("%d %d\n", pj1, pj2);

    }

    return 0;
}