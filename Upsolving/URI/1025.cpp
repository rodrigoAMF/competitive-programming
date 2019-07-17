#include <bits/stdc++.h>

// Nome de Tipos
typedef long long ll;
typedef unsigned long long ull;
typedef long double ld;

// Valores
#define INF 0x3F3F3F3F
#define LINF 0x3F3F3F3F3F3F3F3FLL
#define DINF (double)1e+30
#define EPS (double)1e-9
#define RAD(x) (double)(x*PI)/180.0
#define PCT(x,y) (double)x*100.0/y

// Atalhos
#define F first
#define S second
#define PB push_back
#define MP make_pair
#define forn(i, n) for ( int i = 0; i < (n); ++i )

using namespace std;

int binarySearch(vector<int> arr, int l, int r, int x)
{
   if (r >= l)
   {
        int mid = l + (r - l)/2;
 
        // If the element is present at the middle 
        // itself
        if (arr.at(mid) == x)  
            return mid+1;
 
        // If element is smaller than mid, then 
        // it can only be present in left subarray
        if (arr.at(mid) > x) 
            return binarySearch(arr, l, mid-1, x);
 
        // Else the element can only be present
        // in right subarray
        return binarySearch(arr, mid+1, r, x);
   }
 
   // We reach here when element is not 
   // present in array
   return -1;
}

int linearSearch(vector<int> arr, int x){
	forn(i, arr.size()){
		if(arr.at(i) == x)
			return i+1;
	}
	return -1;
}

int n, q;

int main(){
	int contador = 1;
	while(true){
		cin >> n >> q;
		if(n == q && n == 0) break;

		cout << "CASE# " << contador << ":" << endl;

		vector<int> numeros;

		forn(i, n){
			int aux;
			cin >> aux;
			numeros.push_back(aux);
		}

		sort(numeros.begin(), numeros.end());

		forn(i, q){
			int aux, resultado;
			cin >> aux;
			resultado = linearSearch(numeros, aux);
			if(resultado != -1){
				cout << aux << " found at " << resultado << endl;
			}else{
				cout << aux << " not found" << endl;
			}
		}
		contador++;
	}

	return 0;
}