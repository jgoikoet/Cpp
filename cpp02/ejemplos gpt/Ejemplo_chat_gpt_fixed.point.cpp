#include <iostream>

// Estructura para números de punto fijo (8 bits para la parte entera, 8 bits para la parte fraccionaria)
struct FixedPoint {
    int16_t integerPart;   // Parte entera (puedes ajustar el tamaño según sea necesario)
    uint8_t fractionalPart;  // Parte fraccionaria

    // Constructor para inicializar los valores
    FixedPoint(int16_t integer, uint8_t fractional) : integerPart(integer), fractionalPart(fractional) {}

    // Función para mostrar el número
    void display() {
        std::cout << "Número de punto fijo: " << integerPart << "." << static_cast<int>(fractionalPart) << std::endl;
    }
};

int main() {
    // Ejemplo de uso
    FixedPoint myFixedPoint(10, 5);
    myFixedPoint.display();

    return 0;
}