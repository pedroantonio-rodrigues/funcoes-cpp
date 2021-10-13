#include <iostream>

float media3notas(float n1, float n2, float n3, float media){
	
	media = ((n1 + n2 + n3) / 3);
	std::cout << "a media das 3 notas é: " << media;
	
	return 0;
	
}

float media2notas (float n1, float n2, float media ){
	
	media = ((n1 + n2 ) / 2);
	std::cout << "a media das 2 maiores notas sao: " << media;
	
	return 0;
	
}

int main (){
	
	float nota1 = 0;
	float nota2 = 0;
	float nota3 = 0;
	float maior = 0;
	float meio = 0;
	float menor = 0;
	float media = 0;
	
	std::cin >> nota1; 
	std::cin >> nota2;
	std::cin >> nota3;
	
	if(nota1 >= nota2 && nota2 >= nota3){
		maior = nota1;
		meio  = nota2;
		menor = nota3;
	}else if (nota3 >= nota2 && nota2 >= nota1) {
		maior = nota3;
		meio  = nota2;
		menor = nota1;
	}else if (nota2 > nota3 && nota3 > nota1){
		maior = nota2;
		meio  = nota3;
		menor = nota1;
	}else if (nota2 > nota1 && nota1 > nota3){
		maior = nota2;
		meio = nota1;
		menor = nota3;
	}
	
	
	
	std:: cout << "maior nota: " << maior << "\nnota media: " << meio << "\nmenor: " << menor << "\n";
	std:: cout << media3notas(maior, meio, menor, media) << "\n";
	std:: cout << media2notas(maior, meio, media);
	return 0;
}
