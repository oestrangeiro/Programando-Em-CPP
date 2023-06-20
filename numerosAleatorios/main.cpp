#include <iostream>
#include <cstdlib>
#include <ctime>

int main(void){
	
	unsigned semente = time(0);
	
	srand(semente);
	std::cout << 1 + rand()%10 << std::endl;
	
	return 0;
}
