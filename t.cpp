#include <iostream>
#include <string>
#include <cstdlib>

int main() {
    std::cout << "---   Desligamento   ---\n\nQuantos minutos quer que o computador fique ligado?\n"
              << "Digite [ c ] para cancelar um desligamento agendado." << std::endl;
    std::string teste2;
    std::getline(std::cin, teste2);  // Use getline para capturar a entrada completa
    if (teste2 == "c" || teste2 == "C"){
        system("shutdown -a");
        return 0;
    }
    std::string teste1 = "shutdown -s -t ";
    teste1.append(teste2);
    std::cout << teste1 << std::endl;
    system("shutdown -s -t 500");
    return EXIT_SUCCESS;
}
