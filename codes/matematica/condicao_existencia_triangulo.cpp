int max(int a, int b) {
	return (a>b) ? a : b;
}
int min(int a, int b) {
	return (a<b) ? a : b;
}

cin >> a >> b >> c;

// x > y > z
int x, y, z;

x = max(a, max(b, c));
z = min(a, min(b, c));
// a+b+c = soma total | -x - z = total-(maior+menor)
y = a + b + c - x - z;

if (x < (y + z)) {
	if (x == y && y == z) {
		cout << "Valido-Equilatero" << endl;
	}
	else if (x != y && x != z && y != z) {
		cout << "Valido-Escaleno" << endl;
	}
	else {
		cout << "Valido-Isoceles" << endl;
	}
	// pitagoras x²=y²+z²
	if ((x*x) == ((y*y) + (z*z))) {
		cout << "Retangulo: S" << endl;
	}
	else {
		cout << "Retangulo: N" << endl;
	}
}
else {
	cout << "Invalido" << endl;
}