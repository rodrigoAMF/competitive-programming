#include <bits/stdc++.h>

using namespace std;

int main(){
	int n, x, y, z;
	int xt, yt, zt;

	scanf("%d", &n);

	x = y = z = 0;

	while(n--){
		scanf("%d %d %d", &xt, &yt, &zt);

		x+=xt;
		y+=yt;
		z+=zt;
	}

	if(x == 0 && y == 0 && z == 0){
		printf("YES\n");
	}else{
		printf("NO\n");
	}

	return 0;
}