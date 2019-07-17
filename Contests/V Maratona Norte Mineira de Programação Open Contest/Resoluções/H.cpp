#include<bits/stdc++.h>

using namespace std;

const int N = 100005,oo = 0x3f3f3f3f;
double media,val[N],ans;
int qt,h,m;


int main(){
    while(~scanf("%d%d",&h,&m)){
        qt = (h*60)/m;
        ans = media = 0;
        for(int i=0;i<qt;i++){
            scanf("%lf",&val[i]);
            media += val[i];
        }
        media/=qt;
        for(int i=0;i<qt;i++){
            double aux = (val[i]-media)*(val[i]-media);
            ans += aux;
        }
        ans = sqrt(ans/(qt-1));
        printf("%.5lf\n",ans);
    }
	return 0;
}

