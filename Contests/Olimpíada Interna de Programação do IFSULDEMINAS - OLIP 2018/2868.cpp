#include <bits/stdc++.h>

using namespace std;

int main(){
	int n, x1,x2, rc, rd, diff;
	char op;

	scanf("%d", &n);

	while(n--){
		scanf("%d %c %d = %d", &x1, &op, &x2, &rd);
		switch(op){
			case '+':
				rc = x1 + x2;
				break;
			case '-':
				rc = x1 - x2;
				break;
			case 'x':
				rc = x1 * x2;
				break;
		}
		diff = abs(rd - rc);
		printf("E");
		for(int i = 0; i < diff; i++){
			printf("r");
		}
		printf("ou!\n");
	}
	return 0;
}