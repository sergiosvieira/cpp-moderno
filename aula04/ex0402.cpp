/*
 * Autor: Sérgio Vieira
 * Descrição: programa para saber se um número é primo ou não
 */
#include <iostream>

bool is_prime(long long int n) {
    if (n <= 3) return n > 1;
    else if (n % 2 == 0 || n % 3 == 0) return false;
    int i = 5;
    while (i * i <= n) {
        if (n % i == 0 || n % (i + 2) == 0) return false;
        i += 6;
    }
    return true;
}

int main()
{
    for (int i = 0; i < 400; ++i) {
        long long int value = i;
        if (is_prime(value)) std::cout << "Prime\n";
        else std::cout << "Not Prime\n";
    }
    return 0;
}
