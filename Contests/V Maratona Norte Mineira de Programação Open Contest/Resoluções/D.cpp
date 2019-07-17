#include<bits/stdc++.h>

using namespace std;

const int N = 100005,oo = 0x3f3f3f3f;
int x,y,m,a,b;

int main(){
    while(~scanf("%d%d%d",&x,&y,&m)){
        for(int i=0;i<m;i++){
            scanf("%d%d",&a,&b);
            if((a <= x && b <= y) || (b <= x && a <= y)){
                printf("Sim\n");
            }
            else printf("Nao\n");
        }
    }
	return 0;
}
