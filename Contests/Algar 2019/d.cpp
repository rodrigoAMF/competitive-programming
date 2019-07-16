#include <bits/stdc++.h>

using namespace std;

#define MAX 102

int somatorioGrupos[3];
int indisponibilidade[MAX];
int niveisAlunos[MAX];
int numeroIndisponiveis;
map<string, int> pd;

int tentaFormarGrupos(int n){
    string posicao = to_string(somatorioGrupos[0])+to_string(somatorioGrupos[1])+to_string(somatorioGrupos[2]);
    if(pd[posicao] != 0){
        return ((pd[posicao] == 1) ? 1: 0);
    }

    if(numeroIndisponiveis == n){
        //printf("%d %d %d\n", somatorioGrupos[0], somatorioGrupos[1], somatorioGrupos[2]);
        
        if(somatorioGrupos[0] == somatorioGrupos[1] && somatorioGrupos[1] == somatorioGrupos[2]){
            pd[posicao] = 1;
            return 1;
        }else{
            pd[posicao] = -1;
            return 0;
        }
    }

    for(int i = 0; i < n; i++){
        if(!indisponibilidade[i]){
            indisponibilidade[i] = 1;
            somatorioGrupos[0]+=niveisAlunos[i];
            numeroIndisponiveis++;
            int resposta = tentaFormarGrupos(n);

            if(resposta) return 1;

            indisponibilidade[i] = 0;
            somatorioGrupos[0]-=niveisAlunos[i];
            numeroIndisponiveis--;
        }
    }

    for(int i = 0; i < n; i++){
        if(!indisponibilidade[i]){
            indisponibilidade[i] = 1;
            somatorioGrupos[1]+=niveisAlunos[i];
            numeroIndisponiveis++;
            int resposta = tentaFormarGrupos(n);

            if(resposta) return 1;

            indisponibilidade[i] = 0;
            somatorioGrupos[1]-=niveisAlunos[i];
            numeroIndisponiveis--;
        }
    }

    for(int i = 0; i < n; i++){
        if(!indisponibilidade[i]){
            indisponibilidade[i] = 1;
            somatorioGrupos[2]+=niveisAlunos[i];
            numeroIndisponiveis++;
            int resposta = tentaFormarGrupos(n);

            if(resposta) return 1;

            indisponibilidade[i] = 0;
            somatorioGrupos[2]-=niveisAlunos[i];
            numeroIndisponiveis--;

            if(resposta) return 1;
        }
    }

    return 0;

}

int main(){
    somatorioGrupos[0] = somatorioGrupos[1] = somatorioGrupos[2] = 0;
    int n;

    cin >> n;

    memset(indisponibilidade, 0, sizeof(indisponibilidade));
    //memset(pd, 0, sizeof(pd[0][0][0]) * 61 * 61 * 61);

    for(int i = 0; i < n; i++){
        cin >> niveisAlunos[i];
    }

    numeroIndisponiveis = 0;

    int resposta = tentaFormarGrupos(n);

    cout << ((resposta) ? "SIM" : "NAO") << "\n";

    return 0;
}