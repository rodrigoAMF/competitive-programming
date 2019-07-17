#include<bits/stdc++.h>

using namespace std;

const long long N = 200,oo = 0x3f3f3f3f;
int n,m,q,u,v,w;
long long graph[N][N],ans[N][N][N];

int main(){
    while(~scanf("%d%d",&n,&m)){
        for(int i=1;i<=n;i++)
            for(int j=1;j<=n;j++)
                graph[i][j] = oo;

          for(int i=1;i<=n;i++)
             for(int j=1;j<=n;j++)
                for(int k=1;k<=n;k++)
                    ans[i][j][k] = oo;

        for(int i=1;i<=n;i++) graph[i][i] = 0;

        for(int i=0;i<m;i++){
            scanf("%d%d%d",&u,&v,&w);
            graph[u][v] = graph[v][u] = w;
        }
        for(int k=1;k<=n;k++){
             for(int i=1;i<=n;i++){
                for(int j=1;j<=n;j++){
                    graph[i][j] = min(graph[i][j],graph[i][k] + graph[k][j]);
                    ans[i][j][k] =  graph[i][j];
                }
             }
        }
        scanf("%d",&q);
        for(int i=0;i<q;i++){
            scanf("%d%d%d",&u,&v,&w);
            if(ans[u][v][w] != oo)printf("%lld\n",ans[u][v][w]);
            else if(ans[v][u][w] != oo) printf("%lld\n",ans[v][u][w]);
            else printf("-1\n");
        }
    }
	return 0;
}
