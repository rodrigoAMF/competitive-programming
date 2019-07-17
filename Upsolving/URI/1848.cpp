#include <bits/stdc++.h>

#define forn(i, n) for ( int i = 0; i < (n); ++i )
#define forxn(i, x, n) for ( int i = (x); i < (n); ++i )
#define forr(i, a, b) for ( int i = (a); i <= (b); ++i )
#define ford(i, a, b) for ( int i = (a); i >= (b); −−i )

using namespace std;

int calcNumero(string s){
    int n = 0, i;
    string::iterator it;

    for ( it = (s.end()-1), i = 0; it >= s.begin(); it--, i++){
        if(*it == '*'){
            n += pow(2, i);
        }
    }
    return n;
}

int main(){
    string a;
    int total = 0;

    while(cin >> a){
        if(a == "caw"){
            cin >> a;
            cout << total << endl;
            total = 0;
        }else{
            total+=calcNumero(a);
        }
        
        
    }
    


    return 0;
}