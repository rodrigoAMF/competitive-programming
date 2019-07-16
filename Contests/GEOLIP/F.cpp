#include <bits/stdc++.h>

using namespace std;

int main(){
	char c;
	string n;
	while(1){
		cin >> c >> n;
		if(c == '0' && n == "0") break;

		n.erase(remove(n.begin(), n.end(), c), n.end());

		int fim = 0;
		for(int i = 0; i < n.length(); i++){
			if(n[i] != '0'){
				break;
			}
			fim = i-1;
		}
		n.erase(0, fim);

		if(n == ""){
			cout << "0" << endl;
		}else{
			cout << n << endl;
		}
		
	}

	return 0;
}