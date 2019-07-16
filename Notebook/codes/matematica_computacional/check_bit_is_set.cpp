// Note que uma potência de 2 tem sempre apenas um bit igual a 1, dessa forma se queremos saber se o bit i está igual a 1 , precisamos apenas checar se o and dele e de 2^i é diferente de 0.

bool is_set(int x, int i) {
	bool ret = ((x&(1 << i)) != 0);
	return ret;
}
