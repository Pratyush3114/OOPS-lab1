#include <iostream>
using namespace std;

class WaterBill {
    int consumerNumber;
    string consumerName;
    int waterConsumption;
    int bill;

public:

    // Accept consumer details
    void input() {
        cout << "Enter consumer number: ";
        cin >> consumerNumber;

        cout << "Enter consumer name: ";
        cin >> consumerName;

        cout << "Enter water consumption in litres: ";
        cin >> waterConsumption;
    }

    // Calculate water bill
    void calculateBill() {

        if (waterConsumption <= 500) {
            bill = waterConsumption * 2;
        }
        else if (waterConsumption <= 1000) {
            bill = (500 * 2) + (waterConsumption - 500) * 3;
        }
        else {
            bill = (500 * 2) + (500 * 3) + (waterConsumption - 1000) * 5;
        }
    }

    // Display complete bill
    void display() {
        cout << "\n----- Water Bill -----" << endl;
        cout << "Consumer Number: " << consumerNumber << endl;
        cout << "Consumer Name: " << consumerName << endl;
        cout << "Water Consumption: " << waterConsumption << " litres" << endl;
        cout << "Total Bill: Rs." << bill << endl;
    }
};

int main() {

    WaterBill w;

    w.input();
    w.calculateBill();
    w.display();

    return 0;
}