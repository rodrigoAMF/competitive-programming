#include <bits/stdc++.h>

#define forn(i, n) for ( int i = 0; i < (n); ++i )
#define forxn(i, x, n) for ( int i = (x); i < (n); ++i )
#define forr(i, a, b) for ( int i = (a); i <= (b); ++i )
#define ford(i, a, b) for ( int i = (a); i >= (b); −−i )

using namespace std;

int main(){
    int a,b,c;

    cin >> a >> b >> c;


    // dia 2-3 aumento
    if(c > b){
        // dia 1-2 aumento
        if(b > a){
            if((b-a) <= c-b){
                cout << ":)" << endl;
            }else{
                cout << ":(" << endl;
            }   
        // dia 1-2 queda ou constante
        }else{
            cout << ":)" << endl;
        }
    // dia 2-3 queda ou constante
    }else{
        // queda de 1-2
        if(b < a){
            // queda de 1-2 for menor que de 2-3
            if(a-b > b-c){
                cout << ":)" << endl;
            }else{
                cout << ":(" << endl;
            }
        // aumento de 1-2 e queda de 2-3
        }else{
            cout << ":(" << endl;
        }
    }

    return 0;
}