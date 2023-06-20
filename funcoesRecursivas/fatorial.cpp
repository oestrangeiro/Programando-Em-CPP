#include <iostream>

int fat(long int num);

int main(void){

	// fat(n) = n * (n-1) * (n-2) * ... 3 * 2 * 1

	long int fatorial = 1;

	std::cout << "FATORIAL DE: " << std::endl;
	std::cin >> fatorial;

	std::cout << "Resultado do fatorial de " << fatorial << " é: " << fat(fatorial);
	
	return 0;
}

int fat(long int num){

	if(num == 1){
		return 1;
	}else{
		return num*fat(num-1);
	}
}
