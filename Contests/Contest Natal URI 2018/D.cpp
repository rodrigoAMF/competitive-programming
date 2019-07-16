#include <bits/stdc++.h>

using namespace std;

struct MyStack 
{ 
    stack<int> s; 
    int minEle; 
  
    // Prints minimum element of MyStack 
    int getMin() 
    { 
        if (s.empty()) 
            return -1;
  
        // variable minEle stores the minimum element 
        // in the stack. 
        else
            return minEle;
    } 
  
    // Prints top element of MyStack 
    int peek() 
    { 
        if (s.empty()) 
        { 
            return -1; 
        } 
        int t = s.top(); // Top element. 
        return t;
    } 
  
    // Remove the top element from MyStack 
    void pop() 
    { 
        if (s.empty()) 
        { 
            return; 
        } 
        int t = s.top(); 
        s.pop(); 
  
        // Minimum will change as the minimum element 
        // of the stack is being removed. 
        if (t < minEle) 
        { 
            minEle = 2*minEle - t; 
        } 
    } 
  
    // Removes top element from MyStack 
    void push(int x) 
    { 
        // Insert new number into the stack 
        if (s.empty()) 
        { 
            minEle = x; 
            s.push(x); 
            return; 
        } 
  
        // If new number is less than minEle 
        if (x < minEle) 
        { 
            s.push(2*x - minEle); 
            minEle = x; 
        } 
  
        else
           s.push(x); 
    }
    bool empty(){
    	return s.empty();
    }
}; 

int main(){
	int n, valor;
	string operacao;
	string s, delimiter, token;
	MyStack pilha;
	vector<int> valores;
	int menor = -1;


	scanf("%d ", &n);

	for(int i = 0; i < n; i++){
		cin >> operacao;
		if(operacao.length() > 3){
			scanf("%d ", &valor);
			pilha.push(valor);;
		}else{
			if(operacao == "MIN"){
				if(pilha.empty()){
					cout << "EMPTY" << endl;
				}else{
					cout << pilha.getMin() << endl;
				}
			}else{
				if(pilha.empty()){
					cout << "EMPTY" << endl;
				}else{
					pilha.pop();
				}
			}
		}
		
	}

	return 0;
}