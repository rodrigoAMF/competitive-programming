#include <bits/stdc++.h>

using namespace std;

void geraPossibilidades(int n, int pos, string possibilidade){
    if(pos == n){
        cout << possibilidade << endl;
        return;
    }
    for(char c = 'a'; c <= 'z'; c++){
        possibilidade[pos] = c;

        geraPossibilidades(n, pos+1, possibilidade);
    }
}

int main(){
    int n = 3;

    string possibilidade(n, 'x');
    geraPossibilidades(n, 0, possibilidade);

    return 0;
}