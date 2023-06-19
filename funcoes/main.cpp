#include <iostream>

void somar(int x, int y){
	int s = 0;
	s = x + y;
	std::cout << ": " << s << std::endl;
}

int main(){
	somar(9, 1);
	
	return 0;
}
