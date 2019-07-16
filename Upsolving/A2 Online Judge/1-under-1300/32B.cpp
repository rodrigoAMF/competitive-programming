#include <bits/stdc++.h>

using namespace std;

int main(){
	string notation;
	string message;

	cin >> notation;

	for(int i = 0; i < notation.length(); i++){
		if(notation[i] == '.'){
			message += '0';
		}else{
			if(notation[i+1] == '.'){
				message+= '1';
				i++;
			}else{
				message+= '2';
				i++;
			}
		}
	}

	cout << message << endl;

	return 0;
}