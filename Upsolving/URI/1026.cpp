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

int converte32Bits(int num, int *vetor){
	int i = 0;
	while((num/2.0) > 0){
		*(vetor+i) = num%2;
		num/=2;
		i++;
	}
	vetor[i] = num%2;

	return i;
}

void soma32Bits(int *num1, int *num2, int tamanho){
	int soma = 0;
	for(int i = 0; i < tamanho; i++){
		if(num1[i]+num2[i] == 1){
			soma+=pow(2,i);
		}
	}
	cout << soma << endl;
}

int main(){
	int num1, num2;
	while (true) {
    	cin >> num1;
    	if (!cin)
        	break;
        cin >> num2;
        int tam1, tam2;
        int num1_bits[32], num2_bits[32];
        tam1 = converte32Bits(num1, &num1_bits);
        tam2 = converte32Bits(num2, &num2_bits);

        (tam1 > tam2) ? (soma32Bits(&num1_bits, &num2_bits, tam1)) : (soma32Bits(&num1_bits, &num2_bits, tam2));

    	//cout << calculaLado(porcentagem, area) << "\n";
	}
}