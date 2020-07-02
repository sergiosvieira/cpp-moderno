/*
 * Autor: Sérgio Vieira
 * Descrição: programa para calcular o somatório i/2^j, 
 * i = 1..39 (aumenta de 2 em 2) e j =1..39  
 */
#include <iostream>
#include <iomanip>
#include <cmath>

int main() {
    double s = 0.0;
    double e = 0.0;
    for (int i = 1, j = 0; i <= 39; i+=2, j++) {
        double k = std::pow(2., j);
        std::cout << i << "/" << k << "\n";
        s += static_cast<double>(i) / k;
    }
    std::cout << std::fixed << std::setprecision(2)
              << s << "\n";
    return 0;
}

