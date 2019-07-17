#include <bits/stdc++.h>

#define INF 0x3F3F3F3F
#define LINF 0x3F3F3F3F3F3F3F3FLL
#define DINF (double)1e+30

#define forn(i, n) for ( int i = 0; i < (n); ++i )
#define forxn(i, x, n) for ( int i = (x); i < (n); ++i )
#define forr(i, a, b) for ( int i = (a); i <= (b); ++i )
#define ford(i, a, b) for ( int i = (a); i >= (b); −−i )

using namespace std;

int main(){
    int n;
    vector<string> p;
    vector<int> num;

    cin >> n;

    forn(i, n){
        string temp;
        int total = 0;
        int vencedor = 0;
    	forn(j, 6){ 
            if(j < 4){
                cin >> temp;
                p.push_back(temp);
            }else{
                cin >> temp;
                num.push_back(stoi(temp));
            }
        }
        total = num.at(0) + num.at(1);
        if(p[1] == "PAR" && (total%2) == 0){
            vencedor = 0;
        }else if(p[1] == "IMPAR" && (total%2) == 1){
            vencedor = 0;
        }else if(p[1] == "PAR" && (total%2) == 1){
            vencedor = 2;
        }else if(p[1] == "IMPAR" && (total%2) == 0){
            vencedor = 2;
        }

        cout << p[vencedor] << endl;

        num.clear();
        p.clear();
    }

    return 0;
}