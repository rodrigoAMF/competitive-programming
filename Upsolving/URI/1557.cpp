#include <bits/stdc++.h>
#include <sys/time.h>

using namespace std;

int main()
{
    int n;

    while(true){
        int maior;
        short casas;

        cin >> n;
        if(n == 0) break;

        int matriz[n][n];

        maior = pow(pow(2, (n-1)), 2);

        casas = ceil(log10(maior+1));

        for(int i = 0; i < n; i++){
            int valor = pow(2, i);
            matriz[i][0] = valor;
            matriz[0][i] = valor;
        }
        
        for(int i = 0; i < n; i++){
            for(int j = 0; j < n; j++){
                if(i != 0 && j != 0){
                    matriz[i][j] = 2*matriz[i][j-1];
                }

                int casa_atual = (casas-(ceil(log10(matriz[i][j]+1))));
                
                for(int k = 0; k < casa_atual; k++){
                    cout << " ";
                }
                if(j == (n-1)){
                    cout << matriz[i][j];
                }else{
                    cout << matriz[i][j] << " ";
                }
            }
            cout << endl;
        }
        cout << endl;
    }
    
}