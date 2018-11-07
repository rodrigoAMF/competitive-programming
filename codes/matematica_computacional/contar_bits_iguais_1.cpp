int count_bits(int x) {
	int ret = 0;
	while (x != 0) {
		++ret;
		x -= x & -x;
	}
	return ret;
}
