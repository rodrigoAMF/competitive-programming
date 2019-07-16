#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;

    scanf("%d", &n);

    int anterior, atual;
    int aconteceu = 0;

    for(int i = 0; i < n; i++){
        scanf("%d", &atual);
        if(i > 0){
            if(atual < anterior){
                printf("%d\n", i+1);
                aconteceu = 1;
                break;
            }
        }
        anterior = atual;
    }

    if(!aconteceu){
        printf("0\n");
    }

    return 0;
}