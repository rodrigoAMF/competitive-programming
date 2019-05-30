#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string vogais, texto;
    ll quantidadeVogais;

    while(1){
        quantidadeVogais = 0;
        getline(cin, vogais);
        if(!cin) break;
        getline(cin, texto);
        if(!cin) break;

        for(int i = 0; i < (int)texto.length(); i++){
            for(int j = 0; j < (int)vogais.length(); j++){
                if(texto[i] == vogais[j]){
                    quantidadeVogais++;
                    break;
                }  
            }
        }

        cout << quantidadeVogais << "\n";
    }

    return 0;
}