bool is_power_of_two(int x) {
	if (x == 0)  return 0;
	return ((x&(x - 1)) == 0)
}
