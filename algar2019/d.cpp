#include <bits/stdc++.h>

using namespace std;

#define MAX 101

int somatorioGrupos[3];
int indisponibilidade[MAX];
int numeroIndisponiveis;
int pd[61][61][61];

int tentaFormarGrupos(int n, int niveisAlunos[]){
    if(pd[somatorioGrupos[0]][somatorioGrupos[1]][somatorioGrupos[2]] != 0){
        return ((pd[somatorioGrupos[0]][somatorioGrupos[1]][somatorioGrupos[2]] == 1) ? 1: 0);
    }

    if(numeroIndisponiveis == n){
        //printf("%d %d %d\n", somatorioGrupos[0], somatorioGrupos[1], somatorioGrupos[2]);
        
        if(somatorioGrupos[0] == somatorioGrupos[1] && somatorioGrupos[1] == somatorioGrupos[2]){
            pd[somatorioGrupos[0]][somatorioGrupos[1]][somatorioGrupos[2]] = 1;
            return 1;
        }else{
            pd[somatorioGrupos[0]][somatorioGrupos[1]][somatorioGrupos[2]] = -1;
            return 0;
        }
    }

    for(int i = 0; i < n; i++){
        if(!indisponibilidade[i]){
            indisponibilidade[i] = 1;
            somatorioGrupos[0]+=niveisAlunos[i];
            numeroIndisponiveis++;
            int resposta = tentaFormarGrupos(n, niveisAlunos);

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
            int resposta = tentaFormarGrupos(n, niveisAlunos);

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
            int resposta = tentaFormarGrupos(n, niveisAlunos);

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

    int niveisAlunos[n];

    memset(indisponibilidade, 0, sizeof(indisponibilidade));
    memset(pd, 0, sizeof(pd[0][0][0]) * 61 * 61 * 61);

    for(int i = 0; i < n; i++){
        cin >> niveisAlunos[i];
    }

    numeroIndisponiveis = 0;

    int resposta = tentaFormarGrupos(n, niveisAlunos);

    cout << ((resposta) ? "SIM" : "NAO") << "\n";

    return 0;
}