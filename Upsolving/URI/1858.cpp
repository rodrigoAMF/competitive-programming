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
    int n, menor, pos;
    vector<int> p;

    menor = INF;
    pos = 0;

    cin >> n;
    
    forn(i, n){
        int temp;
        cin >> temp;
        p.push_back(temp);
        if(p[i] < menor){
            menor = p[i];
            pos = i+1;
        }
    }
    
    cout << pos << endl;


    return 0;
}