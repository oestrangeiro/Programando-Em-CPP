#include <iostream>

//	Prototipagem de funcoes
void mostrarMenu();
int escolherLevel();

int main(){
	
	
	mostrarMenu();
	int escolha = escolherLevel(); // escolha da funcao main recebe o return da funcao escolherLevel();
	
	switch(escolha){
		
		case 1:
			std::system("clear || cls");
			std::cout << "'Jolly Roger Ebay' -- Selecionado." << std::endl;
			std::cout << "CARREGANDO...." << std::endl;
			break;
			
		case 2:
			std::system("clear || cls");
			std::cout << "'Letal Sand Land' -- Selecionado." << std::endl;
			std::cout << "CARREGANDO...." << std::endl;
			break;

		case 3:
			std::system("clear || cls");
			std::cout << "'Raincow World' -- Selecionado." << std::endl;
			std::cout << "CARREGANDO...." << std::endl;
			break;
		
		default:
			std::cout << "\nESCOLHA INVALIDA!" << std::endl;
			return 2;
			
	}
	
	return 0;
}

void mostrarMenu(){
	
	std::cout << "\t\t=================================" << std::endl;
	std::cout << "\t\t|   MENU DE SELEÇÃO DE FASES    |" << std::endl;
	std::cout << "\t\t=================================\n" << std::endl;
	
	std::cout << "\t\t1) Jolly Roger Ebay" << std::endl;
	std::cout << "\t\t2) Letal Sand Land" << std::endl;
	std::cout << "\t\t3) Raincow World" << std::endl;

}

int escolherLevel(){
	
	int escolha = 0;
	
	std::cin >> escolha;
	
	return escolha;
}
