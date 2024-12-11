#include <iostream>

class FixedPoint {
private:
    int rawValue;  // Assuming this stores the fixed-point representation

public:
    // Constructor that takes an integer and converts it to a fixed-point value
    FixedPoint(int integerValue) {
        rawValue = integerValue * 100;  // Assuming 2 decimal places, so multiply by 100
    }

    // Function to display the fixed-point value
    void display() {
        std::cout << "Fixed-point value: " << rawValue << std::endl;
    }
};

int main() {
    int integerNumber = 123; // Example integer value

    // Convert the integer to a fixed-point value
    FixedPoint myFixedPoint(integerNumber);

    // Display the fixed-point value
    myFixedPoint.display();

    return 0;
}
