#include <bits/stdc++.h>

using namespace std;

int main(){
    int aux;
    int n;
    bool possivelDividir = true;
    bool precisaTerDuasListas = false;

    //vector<int> uniao;
    vector<int> crescente;
    vector<int> decrescente;
    map<int, int> ocorrencias;

    scanf("%d", &n);

    for(int i = 0; i < n; i++){
        scanf("%d", &aux);
        ocorrencias[aux] = ocorrencias[aux]+1;
        if(ocorrencias[aux] == 1){
            decrescente.push_back(aux);
        }else if(ocorrencias[aux] == 2){
            crescente.push_back(aux);
            precisaTerDuasListas = true;
        }else if(ocorrencias[aux] >= 3){
            possivelDividir = false;
        }
        //uniao.push_back(aux);
    }
    if(possivelDividir){
        if(crescente.size() > 1)
            sort(crescente.begin(), crescente.end());
        if(decrescente.size() > 1)
            sort(decrescente.begin(), decrescente.end(), std::greater<int>());

        printf("Yes\n");
        printf("%d\n", crescente.size());
        for(int i = 0; i < crescente.size(); i++){
            if(i != crescente.size()-1){
                printf("%d ", crescente[i]);
            }else{
                printf("%d", crescente[i]);
            }
        }
        printf("\n%d\n", decrescente.size());
        for(int i = 0; i < decrescente.size(); i++){
            if(i != decrescente.size()-1){
                printf("%d ", decrescente[i]);
            }else{
                printf("%d", decrescente[i]);
            }
        }
        printf("\n");
    }else{
        printf("NO\n");
    }

    return 0;
}