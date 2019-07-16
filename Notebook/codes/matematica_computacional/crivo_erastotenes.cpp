// dados N e Q, com ambos menores que 10^6, teremos Q inteiros a, menores que N, e devemos responder para cada um deles se ele é primo

bool e_composto[1000010];

void crivo(int n) {
	// 1 não é composto, mas o vetor na verdade guarda os números que não são primos
	e_composto[1] = 1;
	for (int i = 2; i <= n; ++i) {
		if (!e_composto[i]) {
			for (int j = 2; j*i <= n; ++j) {
				e_composto[i*j] = 1;
			}
		}
	}
	return;
}

int main() {
	int N, Q, a;
	cin >> N >> Q;
	crivo(N); // Complexidade O(n*log(log(n)))
	for (int i = 0; i < Q; ++i) { // Complexidade O(Q)
		cin >> a;
		// Se composto é falso, então é primo, caso contrário é composto.
		cout << !e_composto[a] << "\n";
	}

	return 0;
}
