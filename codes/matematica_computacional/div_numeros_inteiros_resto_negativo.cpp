int a, b, c;
int q, r;

cin >> a >> b;

q = a / b;
r = a % b;

if (r < 0) {
	int c, d;
	c = (a < 0) ? a * -1 : a;
	d = (b < 0) ? b * -1 : b;

	q = (c + d) / d;
	r = (c - (q * d))*-1;

	q = (a*b > 0) ? q : q * -1;
}
