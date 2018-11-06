// função que recebe o valor de troco N, o número de moedas disponíveis M,
// e um vetor com as moedas disponíveis m
// essa função deve retornar o número mínimo de moedas,
// de acordo com a solução com Programação Dinamica.
int num_moedas(int N, int M, int * m) {
    int dp[N+1];

    // caso base
    dp[0] = 0;

    // sub-problemas
    for(int i=1; i<=N; i++) {
        // é comum atribuir um valor alto, que concerteza
        // é maior que qualquer uma das próximas possibilidades,
        // sendo assim substituido
        dp[i] = 1000000;

        for(int j=0; j<M; j++) {
            if(i-m[j] >= 0) {
                dp[i] = min(dp[i], dp[ i-m[j] ]+1);
            }
        }
    }

    // solução
    return dp[N];
}