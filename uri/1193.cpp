#include <bits/stdc++.h>

#define ALFA 256
#define MOD 1000000007
#define INF 0x3f3f3f3f
#define INFLL 0x3f3f3f3f3f3f3f3f
#define EPS 1e-9
#define PI 3.141592653589793238462643383279502884
#define FOR(x, n) for (int x=0; (x)<int (n) ; (x)++)
#define FOR1(x, n) for (int x=1; (x) <= int (n) ; (x)++)
#define REP(x, n) for (int x=int (n)-1; (x)>=0; (x)--)
#define REP1(x, n) for (int x=(n); (x) > 0; (x)--)
#define pb push_back
#define pf push_front
#define fi first
#define se second
#define mp make_pair
#define sz (x) int (x.size())
#define all (x) x.begin(), x.end()
#define mset (x , y ) memset(&x , (y) , sizeof(x))

using namespace std;

typedef long long ll;
typedef unsigned long long ull;
typedef long double ld;
typedef unsigned int uint;
typedef vector<int> vi;
typedef pair<int , int> ii;

char numerosBinParaHex[16];


string converteNumero(string numero, string base, string baseAlvo){
    ll numeroConvertido;
    string numeroConvertidoString;
    if(base == "bin"){
        // Converte número para binário
        numeroConvertido = stoll(numero, nullptr, 2);
        if(baseAlvo == "dec"){
            return to_string(numeroConvertido);
        }else{
            // baseAlvo == "hex"
            stringstream stream;
            stream << hex << numeroConvertido;
            return stream.str();
        }
    }else if(base == "dec"){
        numeroConvertido = stoll(numero, nullptr, 10);
        if(baseAlvo == "hex"){
            stringstream stream;
            stream << hex << numeroConvertido;
            return stream.str();
        }else{
            // baseAlvo == "bin"
            numeroConvertidoString = bitset<32>(numeroConvertido).to_string();
            numeroConvertidoString = numeroConvertidoString.substr((int)numeroConvertidoString.find('1'), numeroConvertidoString.length());
            return numeroConvertidoString;
        }
    }else{
        // base == "hex"
        numeroConvertido = stoll(numero, nullptr, 16);

        if(baseAlvo == "dec"){
            return to_string(numeroConvertido);
        }else{
            // bin
            numeroConvertidoString = bitset<32>(numeroConvertido).to_string();
            numeroConvertidoString = numeroConvertidoString.substr((int)numeroConvertidoString.find('1'), numeroConvertidoString.length());
            return numeroConvertidoString;
        }
    }
}

int main(){
    ios::sync_with_stdio(false);cin.tie(NULL);
    int n, contadorCase;

    int i = 0;
    for(char c = '0'; c < 'f'; c++, i++){
        numerosBinParaHex[i] = c;
        
        if(c == '9'){
            c = 'a';
            c--;
        }
    }

    cin >> n;
    cin.ignore();

    contadorCase = 1;

    while(n--){
        string numero, base;
        string numeroHex, numeroBin, numeroDec;

        cin >> numero;
        if(!cin) break;
        cin >> base;
        if(!cin) break;

        cout << "Case " << contadorCase << ":\n";
        if(base == "bin"){
            numeroDec = converteNumero(numero, base, "dec");
            numeroHex = converteNumero(numero, base, "hex");

            cout << numeroDec << " dec" << "\n";
            cout << numeroHex << " hex" << "\n";
        }else if(base == "dec"){
            numeroHex = converteNumero(numero, base, "hex");
            numeroBin = converteNumero(numero, base, "bin");
            
            cout << numeroHex << " hex" << "\n";
            cout << numeroBin << " bin" << "\n";
        }else{
            // base == hex
            numeroDec = converteNumero(numero, base, "dec");
            numeroBin = converteNumero(numero, base, "bin");
            
            cout << numeroDec << " dec" << "\n";
            cout << numeroBin << " bin" << "\n";
        }
        cout << "\n";
        contadorCase++;
    }
    

    return 0;
}