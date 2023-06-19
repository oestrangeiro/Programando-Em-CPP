#include <iostream>
#include <math.h>

const float PI = 3.1415;

int main(void){

	float volume, raio = 0;
	
	std::cout << "Calculo do volume de uma esfera\n";
	std::cout << "Informe o raio da esfera: ";
	std::cin >> raio;
	
	volume = (4/3) * PI * (pow(raio, 3));

	std::cout << "\n Volume total da esfera: " << volume;
	
	
	return 0;
}
