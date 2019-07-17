#include <bits/stdc++.h>

#define INF 0x3F3F3F3F
#define LINF 0x3F3F3F3F3F3F3F3FLL
#define DINF (double)1e+30

#define forn(i, n) for ( int i = 0; i < (n); ++i )
#define forxn(i, x, n) for ( int i = (x); i < (n); ++i )
#define forr(i, a, b) for ( int i = (a); i <= (b); ++i )
#define ford(i, a, b) for ( int i = (a); i >= (b); −−i )

using namespace std;

string palavras[100][20];
int tamanho_caracter[100];
int contador_palavra,contador_pontos, pos_codigo;


int main(){
	// mapeamento de todos os caracteres
    map < string , char > data;
    data["=.==="]        = 'a';
    data["===.=.=.="]    = 'b';
    data["===.=.===.="]    = 'c';
    data["===.=.="]        = 'd';
    data["="]        = 'e';
    data["=.=.===.="]    = 'f';
    data["===.===.="]        = 'g';
    data["=.=.=.="]    = 'h';
    data["=.="]        = 'i';
    data["=.===.===.==="]    = 'j';
    data["===.=.==="]        = 'k';
    data["=.===.=.="]    = 'l';
    data["===.==="]        = 'm';
    data["===.="]        = 'n';
    data["===.===.==="]        = 'o';
    data["=.===.===.="]    = 'p';
    data["===.===.=.==="]    = 'q';
    data["=.===.="]        = 'r';
    data["=.=.="]     = 's';
    data["==="]        = 't';
    data["=.=.==="]        = 'u';
    data["=.=.=.==="]    = 'v';
    data["=.===.==="]        = 'w';
    data["===.=.=.==="]    = 'x';
    data["===.=.===.==="]    = 'y';
    data["===.===.=.="]    = 'z';
    data["===.===.===.===.==="]    = '0';
    data["=.===.===.===.==="]    = '1';
    data["=.=.===.===.==="]    = '2';
    data["=.=.=.===.==="]    = '3';
    data["=.=.=.=.==="]    = '4';
    data["=.=.=.=.="]    = '5';
    data["===.=.=.=.="]    = '6';
    data["===.===.=.=.="]    = '7';
    data["===.===.===.=.="]    = '8';
    data["===.===.===.===.="]    = '9';
    data["=.===.=.===.=.==="]  = '.';
    data["===.===.=.=.===.==="]  = ',';
    data["=.=.===.===.=.="]  = '?';
    data["=.===.===.===.===.="]  = '\'';
    data["===.=.===.=.===.==="]  = '!';
    data["===.=.=.===.="]    = '/';
    data["===.=.===.===.="]    = '(';
    data["===.=.===.===.=.==="]  = ')';
    data["=.===.=.=.="]    = '&';
    data["===.===.===.=.=.="]  = ':';
    data["===.=.===.=.===.="]  = ';';
    data["===.=.=.=.==="]    = '=';
    data["=.===.=.===.="]    = '+';
    data["===.=.=.=.=.==="]  = '-';
    data["=.=.===.===.=.==="]  = '_';
    data["=.===.=.=.===.="]  = '"';
    data["=.===.===.=.===.="]  = '@';

    string codigo;
    int n;

    cin >> n;

    while(n--){
    	int pontos = 0;

    	cin >> codigo;

    	string texto;

    	// Separa cada caracter por um espaço
    	forn(i, codigo.size()){
    		// conta os pontos para depois printa-los corretamente
            if(codigo[i] == '.') pontos++;
            else{
            	// se o numero de pontos contados for 3 printa 1 espaço
                if(pontos == 3) texto += " ";
                // se o numero de pontos contados for 7 printa 2 espaços
                else if(pontos == 7)  texto += "  ";
                // se o numero de pontos contador for 1 printa 1 ponto
                else if(pontos == 1) texto += '.';
                texto += codigo[i];
                pontos = 0;
            }
        }
        codigo = texto;

        stringstream ss;
        ss << codigo;

        while(ss >> texto){
        	cout << data[texto];

        	if(ss.good()){
        		// Pega o próximo caracter
                char ch = ss.get();
                // Pega o caracter seguinte ao anterior
                ch = ss.peek();
                // Verifica se é um espaço
                if(ch == ' ' ) cout << " ";
            }
        }
        cout << endl;
    }

    return 0;
}