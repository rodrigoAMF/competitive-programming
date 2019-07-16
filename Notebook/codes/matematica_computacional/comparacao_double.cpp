bool comparaDouble(double val1, double val2, string cmp) {
	if (cmp == "==") {
		return fabs(val1 - val2) < EPSILON;
	}
	else if (cmp == "<=") {
		if (fabs(val1 - val2) < EPSILON) {
			return true;
		}
		else {
			return val1 <= val2;
		}
	}
	else if (cmp == ">=") {
		if (fabs(val1 - val2) < EPSILON) {
			return true;
		}
		else {
			return val1 >= val2;
		}
	}
}
