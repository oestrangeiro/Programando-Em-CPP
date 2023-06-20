#include <iostream>

void recursao(int contador);

int main(void){

	recursao(3);

	return 0;
}

void recursao(int contador){
	if(contador > 0){

		std::cout << "Bla bla bla " << std::endl;
		std::cout << contador << std::endl;
		recursao(contador-1);
		
	}

	
}
