#include <iostream>

class Pessoa{
	private:
		std::string nome = "Nome Pessoa";
		int idade = 0;
		std::string cpf = "000.000.000-00";
		
	public:
	// Prototipagem dos metodos
		void setNome(std::string nome);
		void getNome();
		
		void setIdade(int idade);
		void getIdade();
		
		void setCpf(std::string cpf);
		void getCpf();
			
};

//	Uso dos métodos (Nome da classe::Metodo)

void Pessoa::setNome(std::string nome){
	this->nome = nome;
}

void Pessoa::getNome(){
	std::cout << "NOME --: " << nome << std::endl;
}

void Pessoa::setIdade(int idade){
	this->idade = idade;
}

void Pessoa::getIdade(){
	std::cout << "IDADE --: " << idade << std::endl;
}

void Pessoa::setCpf(std::string cpf){
	this->cpf = cpf;
}

void Pessoa::getCpf(){
	std::cout << "CPF --: " << cpf << std::endl;
}

int main(void){

	Pessoa p1;
	p1.setNome("Mateus");
	p1.getNome();
	p1.setCpf("078.315.763-30");
	p1.getCpf();
	p1.setIdade(19);
	p1.getIdade();
	
	return 0;
}






