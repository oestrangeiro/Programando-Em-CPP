#include <iostream>


int main (void){
	
	int nota1, nota2, notaResultado = 0;
	std::string condicaoNota;
	
	std::cout << "--Soma de notas--\n\n";
	std::cout << "DIGITE A PRIMEIRA NOTA:";
	std::cin >> nota1;
	std::cout << "DIGITE A SEGUNDA NOTA:";
	std::cin >> nota2;
	
	notaResultado = nota1 + nota2;
	
	
	(notaResultado >= 60) ? condicaoNota = "APROVADO!" : condicaoNota = "REPROVADO!";
	
	std::cout << "NOTA FINAL: " << notaResultado << std::endl;
	std::cout << "SITUAÇÃO FINAL: " << condicaoNota << std::endl;
		
	return 0;
}
