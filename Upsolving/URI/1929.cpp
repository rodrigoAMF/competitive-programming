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
    int a,b,c,d;

    cin >> a >> b >> c >> d;

    // a,b,c
    if((a-b) < c && (a+b) > c && (a-c) < b && (a+c) > b && (a-b) < c && (a+b) > c){
    	cout << "S" << endl;
    // a,b,d
    }else if((a-b) < d && (a+b) > d && (a-d) < b && (a+d) > b && (a-b) < d && (a+b) > d){
    	cout << "S" << endl;
    // d,b,c
    }else if((d-b) < c && (d+b) > c && (d-c) < b && (d+c) > b && (d-b) < c && (d+b) > c){
    	cout << "S" << endl;
    // a,d,c
    }else if((a-d) < c && (a+d) > c && (a-c) < d && (a+c) > d && (a-d) < c && (a+d) > c){
    	cout << "S" << endl;
    }else{
    	cout << "N" << endl;
    }

    return 0;
}