#include <bits/stdc++.h>

using namespace std;

int main(){
	string palavra;

	while(cin >> palavra){
		for(int i = 0; i < palavra.length(); i++){
			cout << palavra << endl;
			palavra.erase(palavra.length()-1, palavra.length());
		}
		cout << endl;
	}
	
	return 0;
}