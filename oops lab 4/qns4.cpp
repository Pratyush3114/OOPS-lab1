#include <iostream>
#include <string>
using namespace std;

class ElectricMeter {
private:
    int meterNumber;
    string consumerName;
    float unitsConsumed;

public:
    ElectricMeter(int number, string name, float units) {
        meterNumber = number;
        consumerName = name;
        unitsConsumed = units;
    }

    friend void checkUsage(ElectricMeter e);
};

void checkUsage(ElectricMeter e) {
    cout << " Electricity Usage" << endl;
    cout << "Meter Number: " << e.meterNumber << endl;
    cout << "Consumer Name: " << e.consumerName << endl;
    cout << "Units Consumed: " << e.unitsConsumed << endl;

    if (e.unitsConsumed < 100)
        cout << "Usage Category: Low Usage" << endl;
    else if (e.unitsConsumed <= 300)
        cout << "Usage Category: Moderate Usage" << endl;
    else
        cout << "Usage Category: High Usage" << endl;
}

int main() {
    ElectricMeter e(10245, "Pratyush", 275);

    checkUsage(e);

    return 0;
}