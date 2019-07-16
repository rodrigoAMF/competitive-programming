#include <bits/stdc++.h>

using namespace std;

//#define INFINITO 99999
#define MAX 10001

float memo[MAX][MAX];


// Complexidade O(n)
float formiga(char v, int falta){
    if(falta == 0){
        if(v == 'D'){
            return 1;
        }else{
            return 0;
        }
    }

    if(memo[v][falta] != -1){
        return memo[v][falta];
    }

    int resposta = 0;

    for(char u = 'A'; u != 'D'; u++){
        if(u == v) continue; // para cada vértice u != v
        resposta = resposta + (1/3)*formiga(u, falta-1);
    }
    memo[v][falta] = resposta;
    
    return resposta;
}

int main(){
    int tempo = 2;
    int vertices = 4;

	memset(memo, -1, sizeof(memo[0][0]) * (vertices+1) * (tempo+1));

	printf("%f\n", formiga('D', 2));

    return 0;
}