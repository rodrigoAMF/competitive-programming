#include<bits/stdc++.h>

using namespace std;

const int N = 100005,oo = 0x3f3f3f3f;

int n,m,k;
long long ans,homi[N],muie[N];

int main(){
    while(~scanf("%d%d%d",&n,&m,&k)){
        ans = 0;
        memset(homi,0,sizeof homi);
        memset(muie,0,sizeof muie);
        for(int i=0;i<n;i++){
            int x;
            scanf("%d",&x);
            //printf("%d\n", x%k);
            homi[x%k]++;
            cout << homi[0] << " " << homi[1] << endl;
        }
        cout << "Mulher" << endl;
        for(int i=0;i<m;i++){
            int x;
            scanf("%d",&x);
            //printf("%d\n", x%k);
            muie[x%k]++;
            cout << muie[0] << " " << muie[1] << endl;
        }
        for(int i=0;i<k;i++){
            //printf("%d %d %lld %lld\n",i,(k-i)%k,homi[(k-i)%k],muie[i]);
            ans += homi[(k-i)%k]*muie[i];
        }
        printf("%lld\n",ans);
    }
	return 0;
}
