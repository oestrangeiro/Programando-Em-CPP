#include <iostream>


int main(){
	std::cout << "--MEDIA DE DUAS NOTAS--" << std::endl;
	
	float nota1, nota2 = 0;
	std::cout << "INFORME A PRIMEIRA NOTA: " << std::endl;
	std::cin >> nota1;
	std::cout << "INFORME A SEGUNDA NOTA: " << std::endl;
	std::cin >> nota2;

	float media = (nota2 + nota1) / 2;
	std::cout << "A MEDIA DAS NOTAS É:" << media << std::endl;

	if(media <= 4.9){
		std::cout << "ALUNO REPROVADO!" << std::endl;
	}else if((media > 4.9) && (media < 6.0)){
		std::cout << "ALUNO COM DIREITO À AVALIAÇÃO FINAL!" << std::endl;
	}else if(media >= 6.0){
		std::cout << "ALUNO APROVADO!" << std::endl;
	}
	return 0;
}
