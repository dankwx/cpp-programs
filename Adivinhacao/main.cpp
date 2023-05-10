#include <iostream>
#include <cstdlib>
#include <ctime>

int main()
{

    srand((unsigned)time(NULL));
    int numeroAleatorio = rand() % 5 + 1;
    int numeroUsuario;

    std::cout << "Bem vindo ao jogo da advinhação!" << std::endl;
    std::cout << "De 1 a 5, qual número você acha que é?" << std::endl;
    std::cin >> numeroUsuario;

    if (numeroUsuario == numeroAleatorio)
    {
        std::cout << "Você acertou!!!" << std::endl;
    }
    else
    {
        std::cout << "Você errou :(" << std::endl;
    }

    return 0;
}