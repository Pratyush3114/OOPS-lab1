#include <iostream>

class Square {
private:
    double side; // Data member to store the side of the square

public:
    // Member function to read the side length from the user
    void readSide() {
        std::cout << "Enter the side length of the square: ";
        std::cin >> side;
    }

    // Member function to calculate and return the area
    double calculateArea() {
        return side * side;
    }

    // Member function to calculate and return the perimeter
    double calculatePerimeter() {
        return 4 * side;
    }
};

int main() {
    Square mySquare;

    // Call member functions
    mySquare.readSide();
    
    std::cout << "Area of the square: " << mySquare.calculateArea() << std::endl;
    std::cout << "Perimeter of the square: " << mySquare.calculatePerimeter() << std::endl;

    return 0;
}
