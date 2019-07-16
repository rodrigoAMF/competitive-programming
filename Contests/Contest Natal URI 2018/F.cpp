#include <bits/stdc++.h>

using namespace std;

template <class Container>
void split1(const std::string& str, Container& cont)
{
    std::istringstream iss(str);
    std::copy(std::istream_iterator<std::string>(iss),
         std::istream_iterator<std::string>(),
         std::back_inserter(cont));
}

int main(){
	int c, k;
	string presente_atual;
	string presente_suspeito;
	string presente_recebido;
	int numero_suspeitos;

	while(scanf("%d %d ", &c, &k) != EOF){
		vector<string> presentes;
		vector<vector<string> > suspeitos_associados;
		for(int i = 0; i < c; i++){
			getline(cin, presente_atual);
			presentes.push_back(presente_atual);
			scanf("%d ", &numero_suspeitos);
			vector<string> presentes_suspeitos;
			for(int j = 0; j < numero_suspeitos; j++){
				getline(cin, presente_suspeito);
				presentes_suspeitos.push_back(presente_suspeito);
			}
			suspeitos_associados.push_back(presentes_suspeitos);
		}
		for(int i = 0; i < k; i++){
			getline(cin, presente_recebido);
			string s = presente_recebido;
			string delimiter = ";";

			size_t pos = 0;
			string pedido;
			string recebido;
			while ((pos = s.find(delimiter)) != string::npos) {
			    pedido = s.substr(0, pos);
			    s.erase(0, pos + delimiter.length());
			    recebido = s;
			}
			
			for(int j = 0; j < presentes.size(); j++){
				if(presentes.at(j) == pedido){
					int suspeito = 0;
					for(int k = 0; k < suspeitos_associados[j].size(); k++){
						if(recebido == suspeitos_associados[j][k]){
							suspeito = 1;
							break;
						}
					}
					if(suspeito){
						printf("Y\n");
					}else{
						printf("N\n");
					}
					break;
				}
			}
		}
	}
	return 0;
}