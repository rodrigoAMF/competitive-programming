#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    char lixo;
    string lingua, crianca, traducao;
    map<string, string> feliz_natal;

    scanf("%d ", &n);

    while(n--){
        getline(cin, lingua);
        getline(cin, traducao);

        feliz_natal[lingua] = traducao;
    }

    scanf(" %d ", &n);

    int inicio = 1;

    while(n--){
        if(inicio){
            inicio = 0;
        }else{
            printf("\n");
        }
        getline(cin, crianca);
        getline(cin, lingua);

        cout << crianca << "\n";
        cout << feliz_natal[lingua] << "\n";
    }

    cout << endl;

    return 0;
}