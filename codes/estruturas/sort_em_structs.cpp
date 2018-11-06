// Criar struct
typedef struct {
	int moradores;
	int gastoss;
	int media;
} Imovel;
// Definir comparator para a struct
bool cmp(Imovel const & x,Imovel const & y){
	if(x.media < y.media) {
		return true;
	}else {
		return false;
	}
}
// Efetuar o sort no main
Imovel imoveis[10];
sort(&imoveis[0],&imoveis[10], cmp);