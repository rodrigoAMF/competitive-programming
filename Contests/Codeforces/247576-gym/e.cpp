#include <bits/stdc++.h>

using namespace std;

int main(){
	int n;

	scanf("%d ", &n);

	string cartas;
	int c7, cQ, cJ, cK, cA;

	for(int i = 0; i < n; i++){
		cin >> cartas;
		int numeroUsados = 0;
		int N = (int)cartas.length();
		int cartasRemovidas[N];
		fill(cartasRemovidas, cartasRemovidas+N, 0);

		c7 = cQ = cJ = cK = cA = 1;
		int seq[5];
		while(c7 & cQ & cJ & cK & cA){
			c7 = cQ = cJ = cK = cA = 0;
			for(int z = 0; z < (int)cartas.length(); z++){
				if(c7 & cQ & cJ & cK & cA) break;
				if(cartasRemovidas[z] == 1) continue;

				if(cartas[z] == '7' & !c7){
					c7 = 1;
					seq[0] = z;
				}else if(cartas[z] == 'Q' & c7 & !cQ){
					cQ = 1;
					seq[1] = z;
				}else if(cartas[z] == 'J' & c7 & cQ & !cJ){
					cJ = 1;
					seq[2] = z;
				}else if(cartas[z] == 'K' & c7 & cQ & cJ & !cK){
					cK = 1;
					seq[3] = z;
				}else if(cartas[z] == 'A' & c7 & cQ & cJ & cK & !cA){
					cA = 1;
					seq[4] = z;
				}
			}
			/*cout << (c7 & cQ & cJ & cK & cA) << endl;
			if (!(c7 & cQ & cJ & cK & cA)){
				printf("c7: %d cQ: %d cJ: %d cK: %d cA: %d\n", c7, cQ, cJ, cK, cA);
			}*/
			if(c7 & cQ & cJ & cK & cA){
				numeroUsados+=5;
				for(int z = 0; z < 5; z++){
					//cout << seq[z] << " ";
					cartasRemovidas[seq[z]] = 1;
				}
				//cout << endl;
			}
		}		
		printf("%d\n", (cartas.length()-numeroUsados));
	}

	return 0;
}