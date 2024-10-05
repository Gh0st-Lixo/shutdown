#include <iostream>
#include <string>
#include <sstream>
#include <typeinfo>


int main() {
    std::cout << "---   Desligamento   ---\n\nQuantos minutos quer que o computador fique ligado?" << std::endl
              << "Digite [ c ] para cancelar um desligamento agendado." << std::endl;

    int te;
    std::string teste, teste2;
    std::cin >> teste2;
    if (teste2 == "c" || teste2 == "C"){
        system("shutdown -a");
        return EXIT_SUCCESS;
    }

    std::cout << typeid(teste2).name()<<" " << teste2 << std::endl; // O print retorna uma string, até ai ok.
    std::istringstream (teste2) >> te;                              //Converteu a string do Cin para inteiro
    std::cout << typeid(te).name() << "nt " << te << std::endl;     //print para ter certeza que a string do cin foi convertida para int, até ai ok.
    int resultado = (te * 60);                                      // multiplicação para minutos
    std::cout << typeid(resultado).name() << "nt " << resultado << std::endl; //Verificando de novo se continua sendo string e se foi multiplicada
    std::string convert = std::to_string(resultado);                          
    std::cout << typeid(convert).name() << " " << convert << std::endl;       //Vendo se a variavel multiplicada foi transformada em string
    std::string teste1 = "shutdown -s -t ";
    teste1.append(convert);
    std::cout << typeid(teste1).name() << " " << teste1 << std::endl;         //Verificando se a string final está completa para dar o comando shutdown
    system(teste1.c_str()); //Principal defeito do código fazer loop
    return EXIT_SUCCESS;
}