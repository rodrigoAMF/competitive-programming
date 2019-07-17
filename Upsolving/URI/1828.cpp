#include <bits/stdc++.h>

using namespace std;

int main(){

	int n;
	string a, b;

	cin >> n;
	cin.ignore();

	for(int i = 1; i <= n; i++){
		cin >> a >> b;
		if(a == b) {
			cout << "Caso #"<< i << ": De novo!" << endl;
		}else if(a == "tesoura" && b == "papel" || a == "papel" && b == "pedra" || a == "pedra" && b == "lagarto" || a == "lagarto" && b == "Spock" || a == "Spock" && b == "tesoura" || a == "tesoura" && b == "lagarto" || a == "lagarto" && b == "papel" || a == "papel" && b == "Spock" || a == "Spock" && b == "pedra" || a == "pedra" && b == "tesoura"){
			cout << "Caso #"<< i << ": Bazinga!" << endl;
		}else{
			cout << "Caso #"<< i << ": Raj trapaceou!" << endl;
		}
	}

	return 0;
}