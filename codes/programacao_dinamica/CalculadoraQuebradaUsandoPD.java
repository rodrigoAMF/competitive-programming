package calculadora_quebrada;

import java.io.IOException;
import java.util.ArrayList;
import java.util.LinkedList;
import java.util.Queue;
import java.util.Scanner;

class Main {
	ArrayList<Estado> estados;
	static int[] estadosPositivosJaGerados = new int[100000];
	static int[] estadosNegativosJaGerados = new int[100000];
	static int valorAlvo;
	static int numeroTeclasFuncionando;
	static int numeroOperacoesFuncionando;
	static int[] teclasFuncionando = new int[10];
	// 0 = +, 1 = -, 2 = /, 3 = *
	static int[] operacoesFuncionando = new int[4];
 
    public static void main(String[] args) throws IOException {
    	Scanner s = new Scanner(System.in);
    	
    	valorAlvo = s.nextInt();
    	numeroTeclasFuncionando = s.nextInt();
    	for(int i = 0; i < numeroTeclasFuncionando; i++) {
    		teclasFuncionando[s.nextInt()] = 1;
    	}
    	
    	numeroOperacoesFuncionando = s.nextInt();
    	s.nextLine();
    	String operacoes = s.nextLine();
    	String[] operacoesVetor = operacoes.split("\\s+");
    	for(int i = 0; i < operacoesVetor.length; i++) {
    		char op = operacoesVetor[i].charAt(0);
    		if(op == '+') {
    			operacoesFuncionando[0] = 1;
    		}else if(op == '-') {
    			operacoesFuncionando[1] = 1;
    		}else if(op == '/') {
    			operacoesFuncionando[2] = 1;
    		}else if(op == '*') {
    			operacoesFuncionando[3] = 1;
    		}
    	}
    	
    	
    	/* Definindo valores manualmente
    	valorAlvo = 13;
    	numeroTeclasFuncionando = 4;

    	teclasFuncionando[0] = 1;
    	teclasFuncionando[1] = 1;
    	teclasFuncionando[2] = 1;
    	teclasFuncionando[7] = 1;
    	
    	numeroOperacoesFuncionando = 3;
    	operacoesFuncionando[1] = 1; // -
    	operacoesFuncionando[3] = 1; // *
    	operacoesFuncionando[0] = 1; // +
    	*/
    	
    	Estado raiz = new Estado(0, null);
    	estadosPositivosJaGerados[raiz.valor] = 1;
    	estadosNegativosJaGerados[raiz.valor] = 1;
    	
    	Estado solucao = bfs(raiz);
    	int acoes = getAcoesAPartirDaSolucao(solucao, raiz);
    	acoes-=1;
    	
    	System.out.println(String.valueOf(acoes));
    }
    
    private static int getAcoesAPartirDaSolucao(Estado estadoSolucao, Estado raiz){
    	int acoes = 0;
    	Estado estadoAtual = estadoSolucao;
    	while(estadoAtual != raiz) {
    		acoes++;
    		estadoAtual = estadoAtual.pai;
    	}
    	
    	return acoes;
    }
    
    private static Estado bfs(Estado raiz) {
    	Estado paiAtual;
    	ArrayList<Estado> filhosDoPaiAtual;
    	
    	Queue<Estado> fila = new LinkedList<Estado>();
    	
    	fila.add(raiz);
    	
    	while(!fila.isEmpty()) {
    		paiAtual = fila.poll();
    		filhosDoPaiAtual = geraFilhos(paiAtual);
    		
    		for(int i = 0; i < filhosDoPaiAtual.size(); i++) {
    			if(filhosDoPaiAtual.get(i).valor == valorAlvo) {
    				return filhosDoPaiAtual.get(i);
    			}else {
    				fila.add(filhosDoPaiAtual.get(i));
    			}
    		}
    	}
    	// Se nao encontrar solucao retorna a propria raiz
    	return raiz;
    	
    }
    
    private static ArrayList<Estado> geraFilhos(Estado pai) {
    	ArrayList<Estado> filhos = new ArrayList<>();
    	
    	int valorFilho;
    	boolean divisaoZero;
    	
    	//if(pai.valor == 0) {
    		
    	//}else {
    		// A partir da segunda acao
        	for(int i = 0; i < 4; i++) {
        		// Verifica se a operacao esta funcionando
        		if(operacoesFuncionando[i] != 0) {
        			for(int j = 0; j < 10; j++) {
        				// Verifica se tecla esta funcionando
        				if(teclasFuncionando[j] != 0) {
        					divisaoZero = false;
        					valorFilho = 0;
        					switch(i) {
        						case 0:
        							valorFilho = pai.valor+j;
        							break;
        						case 1:
        							valorFilho = pai.valor-j;
        							break;
        						case 2:
        							if(j != 0) {
        								valorFilho = pai.valor/j;
        							}else {
        								divisaoZero = true;
        							}
        							break;
        						case 3:
        							valorFilho = pai.valor*j;
        							break;
        					}
        					if(!divisaoZero) {
        						// Verifica se numero e positivo ou negativo
        						if(valorFilho >= 0) {
        							if(estadosPositivosJaGerados[valorFilho] != 1) {
        								filhos.add(new Estado(valorFilho, pai));
        								estadosPositivosJaGerados[valorFilho] = 1;
        							}
        						}else {
        							if(estadosNegativosJaGerados[Math.abs(valorFilho)] != 1) {
        								filhos.add(new Estado(valorFilho, pai));
        								estadosNegativosJaGerados[Math.abs(valorFilho)] = 1;
        							}
        						}
        					}
        				}
        			}
        		}
        	}
    	//}
    	
    	return filhos;
    }
    
    private static void printaFilhos(Estado pai, ArrayList<Estado> filhos) {
    	System.out.printf("%s: %d filhos => ", pai, filhos.size());
    	for(int i = 0; i < filhos.size(); i++) {
    		System.out.print(filhos.get(i) + " ");
    	}
    	System.out.println();
    }
    
}

class Estado{
	int valor;
	Estado pai;	
	
	public Estado(int valor, Estado pai) {
		this.valor = valor;
		this.pai = pai;
	}
	
	public String toString() {
		return String.valueOf(valor);
	}
}