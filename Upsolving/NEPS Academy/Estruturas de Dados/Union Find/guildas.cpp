#include <bits/stdc++.h>

#define MAXN 100100

using namespace std;

// declaro as variáveis que vou precisar
int pai[MAXN], peso[MAXN], qtd[MAXN];

int find(int x){

    if(pai[x]==x){
        return x;
    }
    return pai[x]=find(pai[x]);
}

// função join otimizada que atualiza o tamanho dos conjuntos
void join(int x, int y){ // ela recebe os elementos a serem unidos

    // como só vamos unis os patriaarcas só precisamos trabalhar com eles
    // e fazemos caa um dos elementos receber o valor de sue patriarca
    x=find(x);
    y=find(y);

    // agora x e y são os patriarcas dos conjuntos que desejamos unir

    // se eles forem o mesmo patriarca
    if(x==y){
        return; // então os conjuntos já estão unidos e retornamos
    }

    // se o patriarca x tiver peso menor que o patriarca y
    if(peso[x]<peso[y]){    
         pai[x]=y; // faço x ser filho do y
         qtd[y]+=qtd[x]; // e atualizo o número de descendentes de y
    }else if(peso[x]>peso[y]){

         pai[y]=x; // faço y ser filho de x
         qtd[x]+=qtd[y]; // e a tualizo o número de descendentes de x
    }

    // se os dois tiverem o mesmo peso
    if(peso[x]==peso[y]){

        // escolho um para ser o novo patriarca
        pai[x]=y;

        // e guardo que seu peso aumentará um uma unidade
        peso[y]++;

        // e atualizo o seu número de descendentes
        qtd[y]+=qtd[x];
    }
}

int main(){
	/*
	#ifndef ONLINE_JUDGE
	   freopen("input.txt", "r", stdin);
	   freopen("output.txt", "w", stdout);
	#endif
    */

    int n, m, pontos;
    int op, j1, j2;

    while(1){
        int vitorias = 0;

        scanf("%d %d", &n, &m);

        if(n == m & m == 0)
            break;

        for(int i = 1; i <= n; i++){
            scanf("%d", &pontos);
            qtd[i] = pontos;
        }

        for(int i = 0; i < m; i++){
            scanf("%d %d %d", &op, &j1, &j2);
            
            if(op == 1){
                join(j1, j2);
            }else{
                if(qtd[j1] > qtd[j2]){
                    vitorias++;
                }
            }
        }

        printf("%d\n", vitorias);
    }
	

    return 0;
}