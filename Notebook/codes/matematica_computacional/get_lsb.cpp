// O bit menos significativo de um n�mero � menor bit de um n�mero igual a 1, chamamos ele de lsb. Exemplo:
// lsb(20) = lsb(10100) = 100 = 4

int lsb(int x) {
	return x & -x;
}
