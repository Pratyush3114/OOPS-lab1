#include <iostream>
using namespace std;

class Temperature {
    float celsius;
    float fahrenheit;

public:
    // 1. Accept temperature in Celsius
    void accept() {
        cout << "Enter temperature in Celsius: ";
        cin >> celsius;
    }

    // 2. Convert Celsius to Fahrenheit
    void convert() {
        fahrenheit = (9.0 / 5.0) * celsius + 32;
    }

    // 3. Display both temperatures
    void display() {
        cout << "Temperature in Celsius: " << celsius << " C" << endl;
        cout << "Temperature in Fahrenheit: " << fahrenheit << " F" << endl;
    }
};

int main() {
    Temperature t;

    t.accept();
    t.convert();
    t.display();

    return 0;
}