#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int posEncotrado;

int procuraSubstring(string palavra, string substring){
    size_t pos  = palavra.find(substring);
    if(pos != string::npos){
        posEncotrado = (int)pos;
        return 1;
    }
    return 0;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string palavra, substring, palavraCorrigida;
    int inicioSub, fimSub;

    posEncotrado = -1;
    
    while(1){
        getline(cin, palavra);
        if(!cin) break;

        if(palavra.length() < 2){
            cout << palavra << "\n";
            continue;
        }
        inicioSub = (int)palavra.length()-1;
        fimSub = (int)palavra.length();
        
        substring = palavra.substr(inicioSub, fimSub);

        while(procuraSubstring(palavra, substring) && posEncotrado < inicioSub){
            
            //cout << "pos: " << posEncotrado << "| ini: " << inicioSub << " sub=" << substring << endl;
            substring = palavra.substr(--inicioSub, fimSub);
        }
        inicioSub++;
        palavraCorrigida = palavra.substr(0, inicioSub+1);
        cout << palavraCorrigida << "\n";
    }

    return 0;
}