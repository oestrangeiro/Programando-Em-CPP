#include <iostream>


int main(void){

	//	tipo *nome ou tipo* nome

	double PI = 3.1415;

	double* ponteiro = &PI;

	std::cout << "Valor contido na variavel PI: " << PI << std::endl;
	std::cout << "Endereço contido na variavel PI: " << ponteiro << std::endl;
	std::cout << "Valor contido na variavel PI usando *ponteiro: " << *ponteiro << std::endl;
	
	return 0;
}
