#define MAXN 100100

using namespace std;

int pai[MAXN], peso[MAXN];

// funções do Union-Find otimizadas
int find(int x){

    if(pai[x]==x){
        return x;
    }
    return pai[x]=find(pai[x]);
}

void join(int x, int y){

    x=find(x);
    y=find(y);

    if(x==y){
        return;
    }

    if(peso[x]<peso[y]){
        pai[x]=y;
    }
    if(peso[x]>peso[y]){
        pai[y]=x;
    }

    if(peso[x]==peso[y]){

        pai[x]=y;
        peso[y]++;
    }
}
for(int i = 0; i < n; i++){
    pai[i] = i;
}
memset(peso, 1, sizeof peso);