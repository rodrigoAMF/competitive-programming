#include <bits/stdc++.h>

using namespace std;

int main(){
    int l;
    int matriz[3][3];

    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            matriz[i][j]=1;
        }
    }

    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            scanf("%d", &l);
            if(l%2 != 0){
                matriz[i][j] = !matriz[i][j];
                if(j-1 >= 0){
                    matriz[i][j-1] = !matriz[i][j-1];
                }
                if(i-1 >= 0){
                    matriz[i-1][j] = !matriz[i-1][j];
                }
                if(j+1 < 3){
                    matriz[i][j+1] = !matriz[i][j+1];
                }
                if(i+1 < 3){
                    matriz[i+1][j] = !matriz[i+1][j];
                }
            }
        }
    }

    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            printf("%d", matriz[i][j]);
        }
        printf("\n");
    }


    return 0;
}