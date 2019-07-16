// Map é uma variação da estrutura set e sua implementação também é feita utilizando Red- Black Trees. A principal diferença entre um set e um map é o segundo armazena os conjuntos chave, valor e o primeiro apenas chave.
map<string, int> M; // Declaração
M.insert(make_pair("Alana", 10)); //Inserimos uma variável do tipo pair diretamente no map
M["Alana"] = 10; // Relacionando o valor 10 à chave "Alana"
if(M.find("Alana") != M.end()) //Se a chave "Alana" foi inserida no map
cout<<M["Alana"]<<"\n"; //Imprime o valor da chave "Alana", no caso, o valor 10.
M.erase("Alana"); //Apaga o elemento que possui a chave "Alana" do map
// clear(): Apaga todos os elementos.
// size(): Retorna a quantidade de elementos.
// begin(): Retorna um ponteiro para o inicio do map
// end(): Retorna um ponteiro para o final do map