/*
 * Autor: Sérgio Vieira
 * Descrição: programa para calcular a média
 * da soma de valores positivos em um vetor (arranjo)
 */
#include <iostream>
#include <vector>
#include <numeric>
#include <iomanip>

using Vector = std::vector<double>;

std::ostream& operator<<(std::ostream& os, const Vector& v) {
    os << "(";
    for (unsigned int i= 0; i < v.size(); ++i) {
        os << v[i];
        if (i < v.size() - 1) os << " ";
    }
    os << ")";
    return os;
}

int main() {
    Vector input = {7, -5, 6, -3.4, 4.6, 12};
    Vector positives;
    positives.reserve(input.size());
    float value = 0;
    int size = 0;
    for (auto i: input) {
        if (i >= 0) positives.push_back(i);
    }
    std::cout << positives.size() << " valores positivos.\n";
    std::cout << std::fixed << std::setprecision(1)
              << std::accumulate(positives.begin(), positives.end(), 0.0) / positives.size() << "\n";
    return 0;
}

