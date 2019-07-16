#include <bits/stdc++.h>

using namespace std;

#define euler 2.718281828459045235360287
#define pi 3.141592653589793238462643383279502884

typedef long long ll;

// Números pequenos
/*int digitosFatorial(ll n){
	if(n == 1)
		return 1;
	
	// Com floor(log10(numero)) + 1 encontro o número
	// de digitos de qualquer número.
	// Usando essa propriedade posso calcular o fatorial
	// usando logaritmos transformando as multiplicações
	// em somas de log. Ex: log(3!) = log(3*2*1) = log(3) + log(2) + log(1)
	
	double ans = 0;
	for(ll i = 2; i <= n; i++){
		ans += log10(i);
	}
	return floor(ans) + 1;
}*/

// Números grandes (Kamenetsky’s formula)
// f(x) =    log10( ((n/e)^n) * sqrt(2*pi*n))
// f(x) = n* log10(( n/ e)) + log10(2*pi*n)/2 

ll digitosFatorial(ll n){
	if(n <= 0)
		return 0;
	if(n == 1)
		return 1;
	double x = n * log10(n / euler) + (log10(2*pi * n)/2.0);

	return floor(x) + 1;
}

int main(){
	ll n;

	scanf("%lld", &n);

	printf("%d\n", digitosFatorial(n));
	
	return 0;
}