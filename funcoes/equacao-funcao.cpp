#include<iostream>
#include<cmath>

float equacao(float numA, float numB, float numC){
	
	return pow(numB, 2) - 4 * numA * numC;
}

int main(){
	float numA = 0;
	float numB = 0;
	float numC = 0;
	float delta = 0.0;
	
	std::cout << "Digite o primeiro numero: ";
	std::cin >> numA;
	std::cout << "Digite o segundo numero: "; 
	std::cin >> numB;
	std::cout << "Digite o terceiro numero: ";
	std::cin >> numC;
	
	
	delta = equacao(numA, numB, numC);
	std::cout << delta;
	return 0;
	
	 
}
