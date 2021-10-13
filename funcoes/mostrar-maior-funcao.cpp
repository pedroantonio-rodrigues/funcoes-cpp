#include<iostream>

using namespace std;

int maiorNumero(int n1, int n2, int n3){
	
	if (n1 > n2 && n1 > n3){
		cout << n1;
	}else if (n2 > n1 && n2 > n3){
			cout << n3;
	}else {
			cout << n3;
		}
	}

int main(){
	int n1 = 0; 
	int n2 = 0;
	int n3 = 0;
	
	cout << "digite um numero: ";
	cin >> n1;
	
	cout << "digite o segundo numero: ";
	cin >> n2;
	
	cout << "digite o terceiro numero: ";
	cin >> n3;
	
	return maiorNumero(n1,n2,n3);
	
}
