// Note que uma pot�ncia de 2 tem sempre apenas um bit igual a 1, dessa forma se queremos saber se o bit i est� igual a 1 , precisamos apenas checar se o and dele e de 2^i � diferente de 0.

bool is_set(int x, int i) {
	bool ret = ((x&(1 << i)) != 0);
	return ret;
}
