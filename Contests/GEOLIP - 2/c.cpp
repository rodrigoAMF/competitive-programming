#include <bits/stdc++.h>

using namespace std;

int main(){
    int c;

    scanf("%d", &c);

    while(c--){
        int n;
        scanf("%d ", &n);
        vector<string> pessoas;
        string aux;
        int diff = 0;
        for(int i = 0; i < n; i++){
            cin >> aux;
            pessoas.push_back(aux);
        }
        for(int i = 0; i < pessoas.size(); i++){
            for(int j = 0; j < pessoas.size(); j++){
                if(j == i) continue;
                if(pessoas.at(i) != pessoas.at(j)){
                    diff = 1;
                    break;
                }   
            }
        }
        if(diff){
            printf("ingles\n");
        }else{
            cout << pessoas.at(0) << "\n";
        }
        char c;
        scanf("%c", &c);
    }

    return 0;
}