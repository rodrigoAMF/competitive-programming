// declaro as variáveis que vou precisar
pai[MAXN], peso[MAXN], qtd[MAXN];

// função join otimizada que atualiza o tamanho dos conjuntos
void join(int x, int y){ // ela recebe os elementos a serem unidos

    // como só vamos unis os patriaarcas só precisamos trabalhar com eles
    // e fazemos caa um dos elementos receber o valor de sue patriarca
    x=find(x);
    y=find(y);

    // agora x e y são os patriarcas dos conjuntos que desejamos unir

    // se eles forem o mesmo patriarca
    if(x==y){
        return; // então os conjuntos já estão unidos e retornamos
    }

    // se o patriarca x tiver peso menor que o patriarca y
    if(peso[x]<peso[y]){    
         pai[x]=y; // faço x ser filho do y
         qtd[y]+=qtd[x]; // e atualizo o número de descendentes de y
    }

    // se o patriarca y tiver peso menor que o patriarca x
    if(peso[x]>peso[y]){

         pai[y]=x; // faço y ser filho de x
         qtd[x]+=qtd[y]; // e a tualizo o número de descendentes de x
    }

    // se os dois tiverem o mesmo peso
    if(peso[x]==peso[y]){

        // escolho um para ser o novo patriarca
        pai[x]=y;

        // e guardo que seu peso aumentará um uma unidade
        peso[y]++;

        // e atualizo o seu número de descendentes
        qtd[y]+=qtd[x];
    }
}