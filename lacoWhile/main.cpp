#include <iostream>

int main(void){
	
	int contador = 0;
	
	while(contador <= 10){
		std::cout << "Número de voltas no laço: " << contador << " \n";
		std::cout << "Valor contador antes do incremento: " << contador << std::endl;
		contador++;
		std::cout << "Valor contador após o incremento: " << contador << std::endl;
	}
	
	return 0;
}
