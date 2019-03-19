#include <bits/stdc++.h>

using namespace std;

int main(){
    string number;
    int contador;

    cin >> number;

    contador = 0;
    for(int i = 0; i < number.length(); i++){
        if(number[i] == '4' || number[i] == '7'){
            contador++;
        }
    }

    string contador_string = to_string(contador);
    int todos_lucky = 1;

    for(int i = 0; i < contador_string.length(); i++){
        if(!(contador_string[i] == '4' || contador_string[i] == '7')){
            todos_lucky = 0;
            break;
        }
    }

    if(todos_lucky){
        cout << "YES\n";
    }else{
        cout << "NO\n";
    }

    return 0;
}