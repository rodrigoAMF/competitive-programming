memset(grafo, 0, sizeof(grafo[0][0]) * 10 * 10)
int grafo[10][10];
	
grafo[1][2] = grafo[2][1] = 1;
grafo[1][3] = grafo[3][1] = 1;
grafo[1][6] = grafo[6][1] = 1;
grafo[2][3] = grafo[3][2] = 1;
grafo[3][4] = grafo[4][3] = 1;