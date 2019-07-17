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

int contador = 0;
map<int,int> valores;

void bubbleSort(int arr[] ,int count ){
	int n=0,i, troca =1, aux;
	while (n < count && troca == 1){
		troca = 0;
		for(i=0;i<count -1;i ++){
			// trocar > por < caso necessário decrescente
			if( arr [i] < arr [i +1]){
				troca = 1;
				aux = arr [i];
				arr [i] = arr [i +1];
				arr [i+1] = aux;
				if(valores[arr[i]] == 0){
					valores[arr[i]] = 1;
					contador++;
				}
				if(valores[arr[i+1]] == 0){
					valores[arr[i+1]] = 1;
					contador++;
				}
			}
		}
		n++;
	}
}

void selectionSort(int arr[], int n)
{
    int i, j, menor;
 
    // One by one move boundary of unsorted subarray
    for (i = 0; i < n-1; i++)
    {
        // Find the minimum element in unsorted array
        menor = i;
        for (j = i+1; j < n; j++)
          if (arr[j] > arr[menor])
            menor = j;
 		
 		// Swap the found minimum element with the first element
 		if(arr[menor] != arr[i]){
	        int aux;
	        aux = arr[i];
	        arr[i] = arr[menor];
	        arr[menor] = aux;
	        if(valores[arr[i]] == 0){
				valores[arr[i]] = 1;
				contador++;
			}
			if(valores[arr[menor]] == 0){
				valores[arr[menor]] = 1;
				contador++;
			}
		}
    }
}

int main(){
	int n;

	cin >> n;

	forn(i, n){
		contador = 0;
		int tam;
		cin >> tam;
		int vetor[tam];

		forn(j, tam){
			cin >> vetor[j];
			valores.insert(MP(vetor[j], 0));
		}

		selectionSort(vetor, tam);

		valores.clear();

		cout << tam-contador << endl;
	}

	return 0;
}