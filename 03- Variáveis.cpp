#include  <iostream> // Incliuir a biblioteca padrão de entrada e saida

int main ( ) {
    //Declaração de variavelcom atributo direiro de valores 
    
    //Variavel do tipo string
    std::string nome = "Joao Silva";
    std::string  endereco= "Rua exemplo, 123, sao paulo, SP";
    std::string  cuso= "Engenharia da computacao";
    std::string  email= "joao.silva@exemplo.com";
    
    //variavel do tipo char
    char genero ='M';
    
    //variavel do tipo int
    int idade = 21;
    
    //variavel do tipo float
    float nota_final = 89.5f;
    
    //variavel do tipo bool
    bool matricula = "true";
    
    //variavel do tipo double
    double cpf = 12345678900;
    
    //impressão de informação do aluno
   std::cout << "Cadrastro do aluno:" <<std::endl;
   std::cout << "Nome:" <<std::endl;
   std::cout << "Endereco:" <<std::endl;
   std::cout << "Curso" <<std::endl;
   std::cout << "Email" <<std::endl;
   std::cout << "Genero" <<std::endl;
   std::cout << "Idade" <<std::endl;
   std::cout << "Nota final:" <<std::endl;
   std::cout << "Matricula" <<std::endl;
   std::cout << "cpf" <<std::endl;
   
   return 0; //indica que o programa terminou
}
