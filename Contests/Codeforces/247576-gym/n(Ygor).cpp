#include<bits/stdc++.h>
 
using namespace std;
 
const int MAX = 1e5 + 5;
 
int Fenwick[317][MAX], vet[MAX], raiz;
 
void update(int bloco, int x, int alt){
 
    while(x < MAX){
        Fenwick[bloco][x]+=alt;
        x+=x&-x;
    }
 
}
 
int soma(int bloco, int x){
 
    int ans = 0;
 
    while(x > 0){
        ans+=Fenwick[bloco][x];
        x-=x&-x;
    }
 
    return ans;
 
}
 
 
int consulta(int a, int b, int numero){
    int l = a/raiz;
    int r = b/raiz;
 
    int qtd = 0;
 
    if(l == r){
        for(int i=a;i<=b;i++){
            qtd+=vet[i] > numero;
        }
    }else{
        for(int i=a;i<(l+1)*raiz;i++) qtd+=vet[i] > numero;
        for(int i=l+1;i<r;i++){
            int maiores = raiz - soma(i, numero);
            //printf("Bloco %d / maiores que %d -> %d\n",i, numero, maiores);
            qtd+=maiores;
        }
        for(int i=raiz*r;i<=b;i++) qtd+=vet[i] > numero;
 
    }
 
    return qtd;
 
}
 
int main(){
    int n, q;
    scanf("%d%d",&n, &q);
    raiz = sqrt(n);
    for(int i=0;i<n;i++){
        scanf("%d", vet+i);
        update((int) i/raiz, vet[i], 1);
        //printf("Bloco %d %d\n", i/raiz, vet[i]);
    }
    while(q--){
        int op, x, a, b;
        scanf("%d",&op);
        if(op == 1){
            scanf("%d%d",&a,&b);
            a--;
            update((int) a/raiz, vet[a], -1);
            update((int) a/raiz, b, 1);
            vet[a] = b;
        }else{
            scanf("%d%d%d",&x,&a,&b);
            a--, b--;
            printf("%d\n", consulta(a, b, x));
        }
    }
 
    return 0;
}