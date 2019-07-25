#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    string table;
    int contador = 0;

    cin >> n;
    cin.ignore();
    cin >> table;

    for(int i = 0; i < n-1; i++){
        if(table[i] == table[i+1]){
            contador++;
        }
    }

    cout << contador << endl;

    return 0;
}