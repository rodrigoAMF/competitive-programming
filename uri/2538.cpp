#include <bits/stdc++.h>

using namespace std;

int getNumeroPokemonsNoIntervalo(int pc, vector<int> pokemonsNoGinasio){
    return 1;
}


int main(){
    /*
    ip = intervalo de poder
    m = tentativas de colocar pokemon
    */
    int ip, m;

    // pc = pontos de combate
    // na = número de ataques
    int pc, na;

    vector<int> pokemonsNoGinasio;
    int numeroPokemonsNoIntervalo;

    scanf("%d %d", &ip, &m);

    for(int i = 0; i < m; i++){
        scanf("%d %d", &pc, &na);

        numeroPokemonsNoIntervalo = getNumeroPokemonsNoIntervalo(pc, pokemonsNoGinasio);
        if(numeroPokemonsNoIntervalo <= na){
            pokemonsNoGinasio.push_back(pc);
        }
        // se numeroPokemonsNoIntervalo <= na, coloca no ginásio
    }

    printf("%d\n", pokemonsNoGinasio.size());

    return 0;
}