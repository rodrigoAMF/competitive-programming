int VertexCover(X, pai_colorido){
	
	if(PD[X][pai_colorido] != -1) 
		return PD[X][pai_colorido]; // se já calculamos esse caso, retornamos o valor para evitar recálculo
		                            // não se esqueça de, não função main, inicializar todos os valores de PD como -1.
	
	int caso1 = 1, caso2 = 0;
	
	for(int i = 0;i < (int)vizinhos[X].size();i++){ // percorremos todos os vizinhos de X
		
		int V = vizinhos[X][i];
		
		if(V == pai[X]) continue; // checamos se V é o pai de X
		
		// agora, sabemos que V é um filho de X
		pai[V] = X; // definimos o pai de V como sendo X
		caso1 += VertexCover(V, true);  // caso escolhamos colorir X
		caso2 += VertexCover(V, false); // caso escolhamos não-colorir X
	}
	
	if(pai_colorido == true) PD[X][pai_colorido] = min(caso1, caso2);// caso o pai de X esteja colorido, escolhemos o melhor caso
	if(pai_colorido == false) PD[X][pai_colorido] = caso1;           // caso o pai de X não seja colorido, escolhemos o caso1
	
	return PD[X][pai_colorido]; // retornamos o valor da resposta
}