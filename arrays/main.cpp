#include <iostream>

#define  TAM_MAX 5

int main(void){

	int i, nota = 0;
	int nums[TAM_MAX];

	for(i = 0; i < TAM_MAX ; i++){
		std::cout << i+1 << "a NOTA: " << std::endl;
		std::cin >> nota;
		nums[i] = nota;
	}

	for(i = 0; i < 5; i++){
		std::cout << "Valor no array: " << nums[i] << " -- Na posição: " << i << std::endl; 
	}
		

	return 0;
}
