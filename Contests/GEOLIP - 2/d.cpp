#include <bits/stdc++.h>

using namespace std;

int main(){
    int v1[5], v2[5];

    int ok = 1;

    for(int i = 0; i < 5; i++){
        scanf("%d", &v1[i]);
    }
    for(int i = 0; i < 5; i++){
        scanf("%d", &v2[i]);
    }
    for(int i = 0; i < 5; i++){
        if(v1[i] == v2[i]){
            ok = 0;
            break;
        }
    }

    if(ok){
        printf("Y\n");
    }else{
        printf("N\n");
    }

    return 0;
}