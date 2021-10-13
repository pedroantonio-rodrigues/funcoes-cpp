#include<iostream>

int positivoOuNegativo (int numero){
	 
	if (numero < 0){
		std::cout << "Numero Negativo";
	}
	else {
		std::cout << "Numero Positivo";
	}
	return 0;
}

int main(){  
	int numero;
	std::cout << "Digite um numero: ";
	std::cin >> numero;
	
	return positivoOuNegativo(numero);
}
