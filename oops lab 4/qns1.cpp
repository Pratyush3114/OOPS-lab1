#include <iostream>
#include <string>
using namespace std;

class Weather {
private:
    string cityname;
    float temperature;
    string weathercondition;

public:
    Weather(string city, float temp, string condition) {
        cityname = city;
        temperature = temp;
        weathercondition = condition;
    }

    friend void generateReport(Weather w);
};

void generateReport(Weather w) {
    cout << " Weather Report" << endl;
    cout << "City: " << w.cityname << endl;
    cout << "Temperature: " << w.temperature << " C" << endl;
    cout << "Weather Condition: " << w.weathercondition << endl;

    if (w.temperature > 35)
        cout << "Category- Very Hot" << endl;
    else if (w.temperature >= 20)
        cout << "Category- Pleasant" << endl;
    else
        cout << "Category-Cool" << endl;
}

int main() {
    Weather w("Bhubaneswar", 32.5, "Sunny");

    generateReport(w);

    return 0;
}