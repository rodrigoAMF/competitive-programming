#define MAX 999999999
#define max 501
 
using namespace std;
 
int g[max][max], vertices;
 
int dijkstra(int origem, int destino) {
    int minimo, atual;
    int passou[max], pred[max],custo[max];
    for (int i=1; i<=vertices;i++) {
        pred[i]=-1;
        custo[i]=MAX;
        passou[i]=0;
    }
    custo[origem] = 0;
    atual = origem;
    while (atual != destino) {
        for (int i=1; i<=vertices;  i++) {
            if (custo[i] > custo[atual] + g[atual][i]) {
                custo[i] = custo[atual] + g[atual][i];
            }
        }
        minimo = MAX;
        passou[atual]=1;
        for (int i=1; i<=vertices; i++) {
            if ((custo[i]<minimo) && (!passou[i])) {
                minimo = custo[i];
                atual = i;
            }
        }
        // caso nao consiga ir a lugar algum saindo da origem
        if (minimo == MAX) {
            return MAX;
        }
    }
    return custo[destino];
}