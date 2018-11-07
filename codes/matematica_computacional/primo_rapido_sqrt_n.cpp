bool e_primo(int x) {
	if (x == 1)  return 0;
	//note que se o número for 2 ele não entra no loop, comportamento desejado
	for (int i = 2; i*i <= x; ++i) {
		if (x % i == 0) { //se o resto de x por i for 0, então i divide x
			return 0;
		}
	}
	return 1;
}
