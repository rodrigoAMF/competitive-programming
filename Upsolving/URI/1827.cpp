#include <bits/stdc++.h>

#define forn(i, n) for ( int i = 0; i < (n); ++i )
#define forxn(i, x, n) for ( int i = (x); i < (n); ++i )
#define forr(i, a, b) for ( int i = (a); i <= (b); ++i )
#define ford(i, a, b) for ( int i = (a); i >= (b); −−i )

using namespace std;

int main(){
    int n;

    while(true){
        int n2, n3;
        cin >> n;
        if(!cin) break;

        n2 = (n%2 == 1) ? n/2 : (n/2)-1;
        n3 = n/3;
        int matriz[n][n];

        memset(matriz, 0, sizeof(matriz[0][0]) * n * n);

        forn(i, n){
            forn(j, n){
                if(i >= n3 && i < (n-n3) && j >= n3 && j < (n-n3)){
                    if(i == n2 && j == n2){
                        matriz[i][j] = 4;
                    }else{
                        matriz[i][j] = 1;
                    }
                }else if(i == j){
                    matriz[i][j] = 2;
                    matriz[i][n-i-1] = 3;
                    matriz[n-1-i][i] = 3;          
                }
                cout << matriz[i][j];
                
            }
            cout << endl;
        }
        cout << endl;

    }
    return 0;
}