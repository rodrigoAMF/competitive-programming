#include <bits/stdc++.h>

using namespace std;

#define ll long long int

int main(){
	ll n1, n2;
	stringstream ss;
	string resultado;

	while(true){
		scanf("%lld %lld", &n1, &n2);

		if(n1 == n2 && n1 == 0)
			break;

		//printf("%lld %lld\n", n1, n2);

		ss << (n1+n2);
    	resultado = ss.str();

    	resultado.erase(remove(resultado.begin(), resultado.end(), '0'), resultado.end());
    	cout << resultado << "\n";

    	ss.str(std::string());
	}
	


	
	return 0;
}