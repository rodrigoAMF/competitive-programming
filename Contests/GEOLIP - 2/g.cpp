#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;

    scanf("%d", &n);

    while(n--){
        int h, m, p;

        scanf("%d %d %d", &h, &m, &p);

        if(p){
            if(h < 10 && m < 10){
                printf("0%d:0%d - A porta abriu!\n", h, m);
            }else if(h < 10){
                printf("0%d:%d - A porta abriu!\n", h, m);
            }else if(m < 10){
                printf("%d:0%d - A porta abriu!\n", h, m);
            }else{
                printf("%d:%d - A porta abriu!\n", h, m);
            }
            
        }else{
            if(h < 10 && m < 10){
                printf("0%d:0%d - A porta fechou!\n", h, m);
            }else if(h < 10){
                printf("0%d:%d - A porta fechou!\n", h, m);
            }else if(m < 10){
                printf("%d:0%d - A porta fechou!\n", h, m);
            }else{
                printf("%d:%d - A porta fechou!\n", h, m);
            }
        }
        
    }

    return 0;
}