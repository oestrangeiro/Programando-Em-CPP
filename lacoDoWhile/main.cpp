#include <iostream>

//	Exemplo do uso do laço do-while no uso de um sensor que detecta
//	se um porta está aberta e, se sim, imprime na tela um aviso

int main(void){
	
	int sensorPorta = 1; //0 == porta fechada; 1 == porta aberta
	
	do{
		if(sensorPorta == 0){
			std::cout << "PORTA FECHADA" << std::endl;
		}else{
			std::cout << "PORTA ABERTA" << std::endl;
		}
		
	}while(sensorPorta == 1);
	
	return 0;
}
