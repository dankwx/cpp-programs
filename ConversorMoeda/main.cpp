#include <iostream>
#include <iomanip>

int main()
{
    float valorReal;

    std::cout << "Insira o valor em reais que deseja converter para Dólar." << std::endl;
    std::cin >> valorReal;

    std::cout << "O valor inserido convertido em Dólar é de: R$" << std::fixed << std::setprecision(2) << valorReal / 5 << " Reais."
              << std::endl;

    return 0;
}