// busca, inserção e exclusão em complexidade O(log n)
// Mantém os elementos ordenados e não permite elementos duplicados
set<int> S; // Declaração do SET
S.insert(10); // Adiciona um elemento
if(S.find(3) != S.end()) // Se 3 está no conjunto
S.erase(10); // Apaga o elemento do SET
// clear(): Apaga todos os elementos.
// size(): Retorna a quantidade de elementos.
// begin(): Retorna um ponteiro para o inicio do set
// end(): Retorna um ponteiro para o final do set