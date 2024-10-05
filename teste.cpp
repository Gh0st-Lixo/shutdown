#include <iostream> //Código de teste
int main ()
{   std::cout << "Essa porra tinha que executar um desligamento e não uma mensagem";
    system ("shutdown -s -t 500"); //Deveria agendar um desligamento
    //Antes de eu ter feito um código mais complexo isso funcionava de boa, agora não está mais!
    return 0;
}
