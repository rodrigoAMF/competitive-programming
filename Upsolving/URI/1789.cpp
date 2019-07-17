#include <bits/stdc++.h>

using namespace std;

int main(){

	while(true){
		int n;
		int maior = 0;
		cin >> n;
		if(!cin) break;
		for(int i = 0; i < n; i++){
			int temp;
			cin >> temp;
			if(temp > maior){
				maior = temp;
			}
		}
		if(maior < 10){
			cout << "1" << endl;
		}else if(maior >= 20){
			cout << "3" << endl;
		}else{
			cout << "2" << endl;
		}
	}

	return 0;
}