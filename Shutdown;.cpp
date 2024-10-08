#include <iostream>
#include <string>
#include <sstream>

int main() {    //Variaveis
    int minuto; std::string entrada, comando = "shutdown -s -t "; 
    std::cout << "---   Desligamento   ---\n\nQuantos minutos quer que o computador fique ligado?"
              << std::endl
              << "Digite [ c ] para cancelar um desligamento agendado."
              << std::endl;
    
    std::cin >> entrada;
       // Cancelar desligamento
    if (entrada == "c" || entrada == "C"){
        system("shutdown -a");
        return EXIT_SUCCESS;
    }
    std::istringstream (entrada) >> minuto; //Converteu a string do Cin para inteiro
    int resultado = (minuto * 60);         // multiplicação dos Segundos para Minutos
    std::string convert = std::to_string(resultado);  //Convertendo o inteiro para string                        
    comando.append(convert);
    system(comando.c_str());                                                 
    return EXIT_SUCCESS;
}