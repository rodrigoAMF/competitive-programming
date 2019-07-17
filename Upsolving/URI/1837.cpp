#include <bits/stdc++.h>

typedef long long ll;
typedef unsigned long long ull;
typedef long double ld;

#define INF 0x3F3F3F3F
#define LINF 0x3F3F3F3F3F3F3F3FLL
#define DINF (double)1e+30
#define EPS (double)1e-9
#define PI (double)acos(-1.0)
#define RAD(x) (double)(x*PI)/180.0
#define PCT(x,y) (double)x*100.0/y

using namespace std;

int main()
{
    int a, b, c;
    int q, r;
    
    cin >> a >> b;

    q = a/b;
    r = a%b;

    if(r < 0){
        int c,d;
        c = (a < 0) ? a*-1 : a;
        d = (b < 0) ? b*-1 : b;

        q = (c+d)/d;
        r = (c - (q * d))*-1;

        q = (a*b > 0) ? q : q*-1;
    }
    
    cout << q << " " << r << endl;
    
}