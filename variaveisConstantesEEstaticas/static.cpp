#include <iostream>



void mudaVar();

int main(void){

	mudaVar();
	mudaVar();
	mudaVar();

	return 0;
}

void mudaVar(){

	static int var = 1;
	
	std::cout << "Valor de var: " << var << std::endl;

	var++;
	
}
