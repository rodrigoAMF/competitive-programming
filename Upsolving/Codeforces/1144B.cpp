#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    int par, impar;

    par = 0;
    impar = 0;

    scanf("%d", &n);

    vector<int> a;

    for(int i = 0; i < n; i++){
        int aux;
        scanf("%d", &aux);
        a.push_back(aux);
    }

    sort(a.begin(), a.end());

    for(int i = 0; i < n; i++){
        if(a[i]%2 == 0){
            par++;
        }else{
            impar++;
        }
    }
    bool jogadaPar;
    if(par >= impar){
        jogadaPar = true;
    }else{
        jogadaPar = false;
    }
    bool fezJogada;
    while(fezJogada){
        fezJogada = false;
        for(int i = a.size()-1; i >= 0; i--){
            if(jogadaPar){
                if(a[i]%2 == 0){
                    a.erase(a.begin()+i);
                    jogadaPar = false;
                    fezJogada = true;
                    break;
                }
            }else{
                if(a[i]%2 != 0){
                    a.erase(a.begin()+i);
                    jogadaPar = true;
                    fezJogada = true;
                    break;
                }
                
            }
        }
    }
    long long soma = 0;
    for(int i = 0; i < a.size(); i++){
        soma += a[i];
    }

    cout << soma << "\n";

    return 0;
}