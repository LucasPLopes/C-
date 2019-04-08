
//g++ -std=c++11 prog.cpp -o prog
// Problema:
	// You would like to be able  to initialize all variables  in a standard manner
	// Você gostaria de poder  inicializar todas variáveis in em uma forma padrão
// Solução:
	// C++11


#include<iostream>

class Classe{
	
	private:
		int info;
	public: 
		Classe() = default;
		Classe(const Classe &classe) = default;	
};

int main(){
	
	Classe A;
	
	Classe B(Classe());
	
	return 0;
}