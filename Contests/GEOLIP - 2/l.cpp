#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;

    scanf("%d", &n);

    while(n--){
        int p;
        char lixo;
        string pa, c;
        vector<string> coisas;

        scanf("%d ", &p);

        for(int i = 0; i < p; i++){
            cin >> pa >> c;
            cout << pa << c << endl;
            if(c == "chirrin"){
                coisas.push_back(pa);
            }else if(c == "chirrion"){
                for(vector<string>::iterator it = coisas.begin(); it != coisas.end(); ++it){
                    if(*it == pa){
                        coisas.erase(it);
                    }
                }
            }
        }

        sort(coisas.begin(), coisas.end());

        printf("TOTAL\n");
        for(int i = 0; i < coisas.size(); i++){
            cout << coisas.at(i) << "\n";
        }

        scanf("%c", &lixo);
    }

    

    return 0;
}