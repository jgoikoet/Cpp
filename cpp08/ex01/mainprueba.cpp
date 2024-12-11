#include <iostream>
#include <vector>
#include <cstdlib>   // para std::rand
#include <ctime>     // para std::time
#include <algorithm> // para std::generate

int generateBetween10And100() {
    return std::rand() % 100; // Rango de 10 a 100 (inclusive)
}

int main() {
    // Inicializar la semilla para std::rand
    std::srand(static_cast<unsigned int>(std::time(nullptr)));

    std::vector<int> v(10);

    // Generar números entre 10 y 100 y llenar el vector
    std::generate(v.begin(), v.end(), generateBetween10And100);

    // Imprimir los números generados
    for (unsigned int num = 0; num < v.size(); num++) {
        std::cout << v[num] << " ";
    }
    std::cout << std::endl;

    return 0;
}
