#include <iostream>

int main()
{
    int opcao;
    float numberOne;
    float numberTwo;

    std::cout << "Qual opção deseja?" << std::endl;
    std::cout << "1. Somar" << std::endl;
    std::cout << "2. Subtrair" << std::endl;
    std::cout << "3. Multiplicar" << std::endl;
    std::cout << "4. Dividir" << std::endl;

    std::cin >> opcao;

    std::cout << "Insira o primeiro valor" << std::endl;
    std::cin >> numberOne;

    std::cout << "Insira o primeiro valor" << std::endl;
    std::cin >> numberTwo;

    switch (opcao)
    {
    case 1:
        std::cout << "O resultado da soma é: " << numberOne + numberTwo << std::endl;
        break;

    case 2:
        std::cout << "O resultado da subtração é: " << numberOne - numberTwo << std::endl;
        break;

    case 3:
        std::cout << "O resultado da multiplicação é: " << numberOne * numberTwo << std::endl;
        break;

    case 4:
        std::cout << "O resultado da divisão é: " << numberOne / numberTwo << std::endl;
        break;

    default:
        break;
    }

    return 0;
}